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

// Function: sub_00204AD8
// Address: 0x204ad8 - 0x204be8
void sub_00204AD8_0x204ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204AD8_0x204ad8");
#endif

    switch (ctx->pc) {
        case 0x204ad8u: goto label_204ad8;
        case 0x204adcu: goto label_204adc;
        case 0x204ae0u: goto label_204ae0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204ae8u: goto label_204ae8;
        case 0x204aecu: goto label_204aec;
        case 0x204af0u: goto label_204af0;
        case 0x204af4u: goto label_204af4;
        case 0x204af8u: goto label_204af8;
        case 0x204afcu: goto label_204afc;
        case 0x204b00u: goto label_204b00;
        case 0x204b04u: goto label_204b04;
        case 0x204b08u: goto label_204b08;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b10u: goto label_204b10;
        case 0x204b14u: goto label_204b14;
        case 0x204b18u: goto label_204b18;
        case 0x204b1cu: goto label_204b1c;
        case 0x204b20u: goto label_204b20;
        case 0x204b24u: goto label_204b24;
        case 0x204b28u: goto label_204b28;
        case 0x204b2cu: goto label_204b2c;
        case 0x204b30u: goto label_204b30;
        case 0x204b34u: goto label_204b34;
        case 0x204b38u: goto label_204b38;
        case 0x204b3cu: goto label_204b3c;
        case 0x204b40u: goto label_204b40;
        case 0x204b44u: goto label_204b44;
        case 0x204b48u: goto label_204b48;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b50u: goto label_204b50;
        case 0x204b54u: goto label_204b54;
        case 0x204b58u: goto label_204b58;
        case 0x204b5cu: goto label_204b5c;
        case 0x204b60u: goto label_204b60;
        case 0x204b64u: goto label_204b64;
        case 0x204b68u: goto label_204b68;
        case 0x204b6cu: goto label_204b6c;
        case 0x204b70u: goto label_204b70;
        case 0x204b74u: goto label_204b74;
        case 0x204b78u: goto label_204b78;
        case 0x204b7cu: goto label_204b7c;
        case 0x204b80u: goto label_204b80;
        case 0x204b84u: goto label_204b84;
        case 0x204b88u: goto label_204b88;
        case 0x204b8cu: goto label_204b8c;
        case 0x204b90u: goto label_204b90;
        case 0x204b94u: goto label_204b94;
        case 0x204b98u: goto label_204b98;
        case 0x204b9cu: goto label_204b9c;
        case 0x204ba0u: goto label_204ba0;
        case 0x204ba4u: goto label_204ba4;
        case 0x204ba8u: goto label_204ba8;
        case 0x204bacu: goto label_204bac;
        case 0x204bb0u: goto label_204bb0;
        case 0x204bb4u: goto label_204bb4;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bbcu: goto label_204bbc;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bc4u: goto label_204bc4;
        case 0x204bc8u: goto label_204bc8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bd0u: goto label_204bd0;
        case 0x204bd4u: goto label_204bd4;
        case 0x204bd8u: goto label_204bd8;
        case 0x204bdcu: goto label_204bdc;
        case 0x204be0u: goto label_204be0;
        case 0x204be4u: goto label_204be4;
        default: break;
    }

    ctx->pc = 0x204ad8u;

label_204ad8:
    // 0x204ad8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x204ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_204adc:
    // 0x204adc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x204adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_204ae0:
    // 0x204ae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x204ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204ae4:
    // 0x204ae4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x204ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_204ae8:
    // 0x204ae8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x204ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_204aec:
    // 0x204aec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x204aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_204af0:
    // 0x204af0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x204af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_204af4:
    // 0x204af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204af8:
    // 0x204af8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x204af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_204afc:
    // 0x204afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204b00:
    // 0x204b00: 0xc080fe2  jal         func_203F88
label_204b04:
    if (ctx->pc == 0x204B04u) {
        ctx->pc = 0x204B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B00u;
        // 0x204b04: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B08u;
        goto label_204b08;
    }
    ctx->pc = 0x204B00u;
    SET_GPR_U32(ctx, 31, 0x204B08u);
    ctx->pc = 0x204B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B00u;
    // 0x204b04: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203F88u, 0x204B00u, 0x204B08u)) {
        return;
    }
    ctx->pc = 0x204B08u;
label_204b08:
    // 0x204b08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204b0c:
    // 0x204b0c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x204b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_204b10:
    // 0x204b10: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x204b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_204b14:
    // 0x204b14: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x204b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_204b18:
    // 0x204b18: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x204b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_204b1c:
    // 0x204b1c: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x204b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_204b20:
    // 0x204b20: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x204b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_204b24:
    // 0x204b24: 0xb263002f  sdl         $v1, 0x2F($s3)
    ctx->pc = 0x204b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_204b28:
    // 0x204b28: 0xb6630028  sdr         $v1, 0x28($s3)
    ctx->pc = 0x204b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_204b2c:
    // 0x204b2c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x204b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_204b30:
    // 0x204b30: 0xc0808f0  jal         func_2023C0
label_204b34:
    if (ctx->pc == 0x204B34u) {
        ctx->pc = 0x204B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B30u;
        // 0x204b34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B38u;
        goto label_204b38;
    }
    ctx->pc = 0x204B30u;
    SET_GPR_U32(ctx, 31, 0x204B38u);
    ctx->pc = 0x204B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B30u;
    // 0x204b34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x204B30u, 0x204B38u)) {
        return;
    }
    ctx->pc = 0x204B38u;
label_204b38:
    // 0x204b38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x204b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204b3c:
    // 0x204b3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204b40:
    // 0x204b40: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x204b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_204b44:
    // 0x204b44: 0x24423c48  addiu       $v0, $v0, 0x3C48
    ctx->pc = 0x204b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15432));
label_204b48:
    // 0x204b48: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x204b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_204b4c:
    // 0x204b4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_204b50:
    // 0x204b50: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_204b54:
    if (ctx->pc == 0x204B54u) {
        ctx->pc = 0x204B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B50u;
        // 0x204b54: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B58u;
        goto label_204b58;
    }
    ctx->pc = 0x204B50u;
    {
        const bool branch_taken_0x204b50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B50u;
        // 0x204b54: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b50) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204B58u;
label_204b58:
    // 0x204b58: 0xc07f0f2  jal         func_1FC3C8
label_204b5c:
    if (ctx->pc == 0x204B5Cu) {
        ctx->pc = 0x204B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B58u;
        // 0x204b5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B60u;
        goto label_204b60;
    }
    ctx->pc = 0x204B58u;
    SET_GPR_U32(ctx, 31, 0x204B60u);
    ctx->pc = 0x204B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B58u;
    // 0x204b5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC3C8u, 0x204B58u, 0x204B60u)) {
        return;
    }
    ctx->pc = 0x204B60u;
label_204b60:
    // 0x204b60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x204b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_204b64:
    // 0x204b64: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_204b68:
    // 0x204b68: 0xc080858  jal         func_202160
label_204b6c:
    if (ctx->pc == 0x204B6Cu) {
        ctx->pc = 0x204B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B68u;
        // 0x204b6c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B70u;
        goto label_204b70;
    }
    ctx->pc = 0x204B68u;
    SET_GPR_U32(ctx, 31, 0x204B70u);
    ctx->pc = 0x204B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B68u;
    // 0x204b6c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204B68u, 0x204B70u)) {
        return;
    }
    ctx->pc = 0x204B70u;
label_204b70:
    // 0x204b70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204b74:
    // 0x204b74: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x204b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_204b78:
    // 0x204b78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204b7c:
    // 0x204b7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x204b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_204b80:
    // 0x204b80: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_204b84:
    // 0x204b84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204b88:
    // 0x204b88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_204b8c:
    if (ctx->pc == 0x204B8Cu) {
        ctx->pc = 0x204B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B88u;
        // 0x204b8c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B90u;
        goto label_204b90;
    }
    ctx->pc = 0x204B88u;
    {
        const bool branch_taken_0x204b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204b88) {
            ctx->pc = 0x204B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204B88u;
            // 0x204b8c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204B90u;
            goto label_204b90;
        }
    }
    ctx->pc = 0x204B90u;
label_204b90:
    // 0x204b90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204b94:
    // 0x204b94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_204b98:
    if (ctx->pc == 0x204B98u) {
        ctx->pc = 0x204B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B94u;
        // 0x204b98: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B9Cu;
        goto label_204b9c;
    }
    ctx->pc = 0x204B94u;
    {
        const bool branch_taken_0x204b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b94) {
            ctx->pc = 0x204B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204B94u;
            // 0x204b98: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204B9Cu;
            goto label_204b9c;
        }
    }
    ctx->pc = 0x204B9Cu;
label_204b9c:
    // 0x204b9c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x204b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_204ba0:
    // 0x204ba0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x204ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_204ba4:
    // 0x204ba4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x204ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_204ba8:
    // 0x204ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204bac:
    // 0x204bac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x204bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_204bb0:
    // 0x204bb0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x204bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_204bb4:
    // 0x204bb4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x204bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_204bb8:
    // 0x204bb8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_204bbc:
    // 0x204bbc: 0x40f809  jalr        $v0
label_204bc0:
    if (ctx->pc == 0x204BC0u) {
        ctx->pc = 0x204BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BBCu;
        // 0x204bc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BC4u;
        goto label_204bc4;
    }
    ctx->pc = 0x204BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204BC4u);
        ctx->pc = 0x204BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BBCu;
        // 0x204bc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BBCu, 0x204BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204BC4u;
label_204bc4:
    // 0x204bc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x204bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204bc8:
    // 0x204bc8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x204bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204bcc:
    // 0x204bcc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x204bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204bd0:
    // 0x204bd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x204bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204bd4:
    // 0x204bd4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x204bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204bd8:
    // 0x204bd8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x204bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204bdc:
    // 0x204bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204be0:
    // 0x204be0: 0x3e00008  jr          $ra
label_204be4:
    if (ctx->pc == 0x204BE4u) {
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE0u;
        // 0x204be4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BE8u;
        goto label_fallthrough_0x204be0;
    }
    ctx->pc = 0x204BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE0u;
        // 0x204be4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x204be0:
    ctx->pc = 0x204BE8u;
}
