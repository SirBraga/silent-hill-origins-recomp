#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218A40
// Address: 0x218a40 - 0x218e00
void sub_00218A40_0x218a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218A40_0x218a40");
#endif

    switch (ctx->pc) {
        case 0x218a68u: goto label_218a68;
        case 0x218a74u: goto label_218a74;
        case 0x218a84u: goto label_218a84;
        case 0x218a8cu: goto label_218a8c;
        case 0x218aa8u: goto label_218aa8;
        case 0x218ad8u: goto label_218ad8;
        case 0x218afcu: goto label_218afc;
        case 0x218b08u: goto label_218b08;
        case 0x218b14u: goto label_218b14;
        case 0x218b50u: goto label_218b50;
        case 0x218b60u: goto label_218b60;
        case 0x218b6cu: goto label_218b6c;
        case 0x218b8cu: goto label_218b8c;
        case 0x218ba0u: goto label_218ba0;
        case 0x218c10u: goto label_218c10;
        case 0x218c18u: goto label_218c18;
        case 0x218cd8u: goto label_218cd8;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cf8u: goto label_218cf8;
        case 0x218d60u: goto label_218d60;
        case 0x218da0u: goto label_218da0;
        case 0x218dc0u: goto label_218dc0;
        case 0x218de0u: goto label_218de0;
        default: break;
    }

    ctx->pc = 0x218a40u;

    // 0x218a40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x218a44: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x218a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x218a48: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x218a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x218a4c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x218a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x218a50: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x218a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x218a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x218a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x218a5c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x218a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x218a60: 0xc086c6c  jal         func_21B1B0
    ctx->pc = 0x218A60u;
    SET_GPR_U32(ctx, 31, 0x218A68u);
    ctx->pc = 0x218A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A60u;
    // 0x218a64: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x218A60u, 0x218A68u)) {
        return;
    }
    ctx->pc = 0x218A68u;
label_218a68:
    // 0x218a68: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x218a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x218a6c: 0xc086b48  jal         func_21AD20
    ctx->pc = 0x218A6Cu;
    SET_GPR_U32(ctx, 31, 0x218A74u);
    ctx->pc = 0x218A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A6Cu;
    // 0x218a70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD20u, 0x218A6Cu, 0x218A74u)) {
        return;
    }
    ctx->pc = 0x218A74u;
label_218a74:
    // 0x218a74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218a78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x218a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a7c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x218A7Cu;
    SET_GPR_U32(ctx, 31, 0x218A84u);
    ctx->pc = 0x218A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A7Cu;
    // 0x218a80: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x218A7Cu, 0x218A84u)) {
        return;
    }
    ctx->pc = 0x218A84u;
label_218a84:
    // 0x218a84: 0xc0861d2  jal         func_218748
    ctx->pc = 0x218A84u;
    SET_GPR_U32(ctx, 31, 0x218A8Cu);
    ctx->pc = 0x218A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A84u;
    // 0x218a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218748u, 0x218A84u, 0x218A8Cu)) {
        return;
    }
    ctx->pc = 0x218A8Cu;
label_218a8c:
    // 0x218a8c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x218a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x218a90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218a94: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x218a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x218a98: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218a9c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x218aa0: 0xc080924  jal         func_202490
    ctx->pc = 0x218AA0u;
    SET_GPR_U32(ctx, 31, 0x218AA8u);
    ctx->pc = 0x218AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AA0u;
    // 0x218aa4: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218AA0u, 0x218AA8u)) {
        return;
    }
    ctx->pc = 0x218AA8u;
label_218aa8:
    // 0x218aa8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x218aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x218aac: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x218aacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x218ab0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218ab4: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x218ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x218ab8: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218abc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x218ac0: 0x5c800003  bgtzl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218AC0u;
    {
        const bool branch_taken_0x218ac0 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x218ac0) {
            ctx->pc = 0x218AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218AC0u;
            // 0x218ac4: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218AD0u;
            goto label_218ad0;
        }
    }
    ctx->pc = 0x218AC8u;
    // 0x218ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218AC8u;
    {
        const bool branch_taken_0x218ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AC8u;
        // 0x218acc: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ac8) {
            ctx->pc = 0x218ADCu;
            goto label_218adc;
        }
    }
    ctx->pc = 0x218AD0u;
label_218ad0:
    // 0x218ad0: 0xc080924  jal         func_202490
    ctx->pc = 0x218AD0u;
    SET_GPR_U32(ctx, 31, 0x218AD8u);
    ctx->pc = 0x218AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AD0u;
    // 0x218ad4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218AD0u, 0x218AD8u)) {
        return;
    }
    ctx->pc = 0x218AD8u;
label_218ad8:
    // 0x218ad8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x218ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_218adc:
    // 0x218adc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218ae0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218ae4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ae8: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x218ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x218aec: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218af0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x218af4: 0xc080924  jal         func_202490
    ctx->pc = 0x218AF4u;
    SET_GPR_U32(ctx, 31, 0x218AFCu);
    ctx->pc = 0x218AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AF4u;
    // 0x218af8: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218AF4u, 0x218AFCu)) {
        return;
    }
    ctx->pc = 0x218AFCu;
label_218afc:
    // 0x218afc: 0x1a600012  blez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x218AFCu;
    {
        const bool branch_taken_0x218afc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x218B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AFCu;
        // 0x218b00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218afc) {
            ctx->pc = 0x218B48u;
            goto label_218b48;
        }
    }
    ctx->pc = 0x218B04u;
    // 0x218b04: 0x0  nop
    ctx->pc = 0x218b04u;
    // NOP
label_218b08:
    // 0x218b08: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x218b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x218b0c: 0xc086b44  jal         func_21AD10
    ctx->pc = 0x218B0Cu;
    SET_GPR_U32(ctx, 31, 0x218B14u);
    ctx->pc = 0x218B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B0Cu;
    // 0x218b10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD10u, 0x218B0Cu, 0x218B14u)) {
        return;
    }
    ctx->pc = 0x218B14u;
label_218b14:
    // 0x218b14: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218b18: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x218b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x218b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x218b20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x218b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218b24: 0x233302a  slt         $a2, $s1, $s3
    ctx->pc = 0x218b24u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x218b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x218b2c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x218b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x218b30: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x218b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x218b34: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x218b38: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x218b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218b3c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x218b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218b40: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x218B40u;
    {
        const bool branch_taken_0x218b40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B40u;
        // 0x218b44: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b40) {
            ctx->pc = 0x218B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b08;
        }
    }
    ctx->pc = 0x218B48u;
label_218b48:
    // 0x218b48: 0xc086c18  jal         func_21B060
    ctx->pc = 0x218B48u;
    SET_GPR_U32(ctx, 31, 0x218B50u);
    ctx->pc = 0x218B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B48u;
    // 0x218b4c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B060u, 0x218B48u, 0x218B50u)) {
        return;
    }
    ctx->pc = 0x218B50u;
label_218b50:
    // 0x218b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b58: 0xc0864d4  jal         func_219350
    ctx->pc = 0x218B58u;
    SET_GPR_U32(ctx, 31, 0x218B60u);
    ctx->pc = 0x218B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B58u;
    // 0x218b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219350u, 0x218B58u, 0x218B60u)) {
        return;
    }
    ctx->pc = 0x218B60u;
label_218b60:
    // 0x218b60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218b64: 0xc086b28  jal         func_21ACA0
    ctx->pc = 0x218B64u;
    SET_GPR_U32(ctx, 31, 0x218B6Cu);
    ctx->pc = 0x218B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B64u;
    // 0x218b68: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21ACA0u, 0x218B64u, 0x218B6Cu)) {
        return;
    }
    ctx->pc = 0x218B6Cu;
label_218b6c:
    // 0x218b6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218b74: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218b78: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x218b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x218b7c: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218b80: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x218b84: 0xc080924  jal         func_202490
    ctx->pc = 0x218B84u;
    SET_GPR_U32(ctx, 31, 0x218B8Cu);
    ctx->pc = 0x218B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B84u;
    // 0x218b88: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218B84u, 0x218B8Cu)) {
        return;
    }
    ctx->pc = 0x218B8Cu;
label_218b8c:
    // 0x218b8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x218b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x218b90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x218b94: 0x1a200017  blez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x218B94u;
    {
        const bool branch_taken_0x218b94 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x218B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B94u;
        // 0x218b98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b94) {
            ctx->pc = 0x218BF4u;
            goto label_218bf4;
        }
    }
    ctx->pc = 0x218B9Cu;
    // 0x218b9c: 0x0  nop
    ctx->pc = 0x218b9cu;
    // NOP
label_218ba0:
    // 0x218ba0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218ba4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x218ba8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x218bac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218bb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x218bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218bb8: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x218bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x218bbc: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x218bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x218bc0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x218bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x218bc4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x218bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218bc8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x218bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218bcc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x218bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x218bd0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x218bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218bd4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x218bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x218bd8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x218bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x218bdc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x218bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218be0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218be4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x218be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x218be8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x218be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x218bec: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x218BECu;
    {
        const bool branch_taken_0x218bec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x218BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BECu;
        // 0x218bf0: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bec) {
            ctx->pc = 0x218BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ba0;
        }
    }
    ctx->pc = 0x218BF4u;
label_218bf4:
    // 0x218bf4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x218bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x218bf8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x218bfc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x218bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218c00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218c04: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x218C04u;
    {
        const bool branch_taken_0x218c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C04u;
        // 0x218c08: 0x8c710004  lw          $s1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c04) {
            ctx->pc = 0x218D7Cu;
            goto label_218d7c;
        }
    }
    ctx->pc = 0x218C0Cu;
    // 0x218c0c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_218c10:
    // 0x218c10: 0xc086bf6  jal         func_21AFD8
    ctx->pc = 0x218C10u;
    SET_GPR_U32(ctx, 31, 0x218C18u);
    ctx->pc = 0x218C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C10u;
    // 0x218c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AFD8u, 0x218C10u, 0x218C18u)) {
        return;
    }
    ctx->pc = 0x218C18u;
label_218c18:
    // 0x218c18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218c1c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x218c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x218c20: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x218c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x218c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218c28: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x218c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x218c2c: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x218c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x218c30: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x218c34: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x218c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218c38: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x218c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218c3c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x218c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x218c40: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x218c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218c44: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x218c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218c48: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x218c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x218c4c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x218c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218c50: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x218c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x218c54: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x218c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x218c58: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x218c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x218c5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x218c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218c60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x218c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x218c64: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x218C64u;
    {
        const bool branch_taken_0x218c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C64u;
        // 0x218c68: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c64) {
            ctx->pc = 0x218C84u;
            goto label_218c84;
        }
    }
    ctx->pc = 0x218C6Cu;
    // 0x218c6c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x218c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218c70: 0x0  nop
    ctx->pc = 0x218c70u;
    // NOP
    // 0x218c74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x218C74u;
    {
        const bool branch_taken_0x218c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C74u;
        // 0x218c78: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c74) {
            ctx->pc = 0x218C9Cu;
            goto label_218c9c;
        }
    }
    ctx->pc = 0x218C7Cu;
    // 0x218c7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218C7Cu;
    {
        const bool branch_taken_0x218c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C7Cu;
        // 0x218c80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c7c) {
            ctx->pc = 0x218CA4u;
            goto label_218ca4;
        }
    }
    ctx->pc = 0x218C84u;
label_218c84:
    // 0x218c84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218c88: 0x0  nop
    ctx->pc = 0x218c88u;
    // NOP
    // 0x218c8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x218C8Cu;
    {
        const bool branch_taken_0x218c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C8Cu;
        // 0x218c90: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c8c) {
            ctx->pc = 0x218C9Cu;
            goto label_218c9c;
        }
    }
    ctx->pc = 0x218C94u;
    // 0x218c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x218C94u;
    {
        const bool branch_taken_0x218c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C94u;
        // 0x218c98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c94) {
            ctx->pc = 0x218CA4u;
            goto label_218ca4;
        }
    }
    ctx->pc = 0x218C9Cu;
label_218c9c:
    // 0x218c9c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x218c9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x218ca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218ca4:
    // 0x218ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x218ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218ca8: 0x0  nop
    ctx->pc = 0x218ca8u;
    // NOP
    // 0x218cac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218cb0: 0x0  nop
    ctx->pc = 0x218cb0u;
    // NOP
    // 0x218cb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x218CB4u;
    {
        const bool branch_taken_0x218cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218cb4) {
            ctx->pc = 0x218CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218CB4u;
            // 0x218cb8: 0x24630003  addiu       $v1, $v1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218CBCu;
            goto label_218cbc;
        }
    }
    ctx->pc = 0x218CBCu;
label_218cbc:
    // 0x218cbc: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x218cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x218cc0: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x218cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x218cd0: 0xc086bc2  jal         func_21AF08
    ctx->pc = 0x218CD0u;
    SET_GPR_U32(ctx, 31, 0x218CD8u);
    ctx->pc = 0x218CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CD0u;
    // 0x218cd4: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF08u, 0x218CD0u, 0x218CD8u)) {
        return;
    }
    ctx->pc = 0x218CD8u;
label_218cd8:
    // 0x218cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218ce0: 0xc086bc2  jal         func_21AF08
    ctx->pc = 0x218CE0u;
    SET_GPR_U32(ctx, 31, 0x218CE8u);
    ctx->pc = 0x218CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CE0u;
    // 0x218ce4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF08u, 0x218CE0u, 0x218CE8u)) {
        return;
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218cf0: 0xc086bc2  jal         func_21AF08
    ctx->pc = 0x218CF0u;
    SET_GPR_U32(ctx, 31, 0x218CF8u);
    ctx->pc = 0x218CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CF0u;
    // 0x218cf4: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF08u, 0x218CF0u, 0x218CF8u)) {
        return;
    }
    ctx->pc = 0x218CF8u;
label_218cf8:
    // 0x218cf8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x218cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x218cfc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x218cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218d00: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x218d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x218d04: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x218d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x218d08: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x218d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x218d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x218D0Cu;
    {
        const bool branch_taken_0x218d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D0Cu;
        // 0x218d10: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d0c) {
            ctx->pc = 0x218D28u;
            goto label_218d28;
        }
    }
    ctx->pc = 0x218D14u;
    // 0x218d14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218d18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x218d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218D20u;
    {
        const bool branch_taken_0x218d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D20u;
        // 0x218d24: 0x2443000c  addiu       $v1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d20) {
            ctx->pc = 0x218D34u;
            goto label_218d34;
        }
    }
    ctx->pc = 0x218D28u;
label_218d28:
    // 0x218d28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x218d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x218d2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x218d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x218d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218d34:
    // 0x218d34: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x218d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x218d38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x218d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x218d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x218d48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x218d50: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x218d54: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x218d58: 0xc086380  jal         func_218E00
    ctx->pc = 0x218D58u;
    SET_GPR_U32(ctx, 31, 0x218D60u);
    ctx->pc = 0x218D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D58u;
    // 0x218d5c: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218E00u, 0x218D58u, 0x218D60u)) {
        return;
    }
    ctx->pc = 0x218D60u;
label_218d60:
    // 0x218d60: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x218d64: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x218d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x218d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x218d6c: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x218d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x218d70: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x218d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218d74: 0x5600ffa6  bnel        $s0, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x218D74u;
    {
        const bool branch_taken_0x218d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x218d74) {
            ctx->pc = 0x218D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D74u;
            // 0x218d78: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c10;
        }
    }
    ctx->pc = 0x218D7Cu;
label_218d7c:
    // 0x218d7c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x218d80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218d84: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218d88: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x218d8c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x218d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x218d90: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218d94: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x218d98: 0xc080924  jal         func_202490
    ctx->pc = 0x218D98u;
    SET_GPR_U32(ctx, 31, 0x218DA0u);
    ctx->pc = 0x218D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D98u;
    // 0x218d9c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218D98u, 0x218DA0u)) {
        return;
    }
    ctx->pc = 0x218DA0u;
label_218da0:
    // 0x218da0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x218da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x218da4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218da8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218dac: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x218dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x218db0: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218db4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x218db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x218db8: 0xc080924  jal         func_202490
    ctx->pc = 0x218DB8u;
    SET_GPR_U32(ctx, 31, 0x218DC0u);
    ctx->pc = 0x218DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DB8u;
    // 0x218dbc: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x218DB8u, 0x218DC0u)) {
        return;
    }
    ctx->pc = 0x218DC0u;
label_218dc0:
    // 0x218dc0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x218dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x218dc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dcc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218dd0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x218dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x218dd4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218dd8: 0xc0866ca  jal         func_219B28
    ctx->pc = 0x218DD8u;
    SET_GPR_U32(ctx, 31, 0x218DE0u);
    ctx->pc = 0x218DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DD8u;
    // 0x218ddc: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219B28u, 0x218DD8u, 0x218DE0u)) {
        return;
    }
    ctx->pc = 0x218DE0u;
label_218de0:
    // 0x218de0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218de4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x218de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218de8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x218de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218dec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x218decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218df0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x218df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218df4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x218df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218df8: 0x3e00008  jr          $ra
    ctx->pc = 0x218DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DF8u;
        // 0x218dfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218E00u;
}
