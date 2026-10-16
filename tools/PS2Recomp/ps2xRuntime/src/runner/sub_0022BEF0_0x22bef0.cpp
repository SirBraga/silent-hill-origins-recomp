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

// Function: sub_0022BEF0
// Address: 0x22bef0 - 0x22c0a8
void sub_0022BEF0_0x22bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BEF0_0x22bef0");
#endif

    switch (ctx->pc) {
        case 0x22bf88u: goto label_22bf88;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bfb8u: goto label_22bfb8;
        case 0x22bfccu: goto label_22bfcc;
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22c010u: goto label_22c010;
        case 0x22c028u: goto label_22c028;
        case 0x22c030u: goto label_22c030;
        case 0x22c044u: goto label_22c044;
        case 0x22c058u: goto label_22c058;
        default: break;
    }

    ctx->pc = 0x22bef0u;

    // 0x22bef0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22bef4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22bef8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x22bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x22befc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22befcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf00: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22bf00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22bf04: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x22bf04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf08: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22bf0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22bf0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22bf10: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22bf14: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22bf18: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x22bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x22bf1c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x22bf20: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x22bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x22bf24: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x22bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x22bf28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22bf2c: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x22bf30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22bf34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22bf38: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x22bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x22bf3c: 0x8efe0018  lw          $fp, 0x18($s7)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x22bf40: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x22bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x22bf44: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22BF44u;
    {
        const bool branch_taken_0x22bf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF44u;
        // 0x22bf48: 0x8ef30008  lw          $s3, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf44) {
            ctx->pc = 0x22BF7Cu;
            goto label_22bf7c;
        }
    }
    ctx->pc = 0x22BF4Cu;
    // 0x22bf4c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x22bf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22bf50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF50u;
    {
        const bool branch_taken_0x22bf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF50u;
        // 0x22bf54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf50) {
            ctx->pc = 0x22BF68u;
            goto label_22bf68;
        }
    }
    ctx->pc = 0x22BF58u;
    // 0x22bf58: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BF58u;
    {
        const bool branch_taken_0x22bf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF58u;
        // 0x22bf5c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf58) {
            ctx->pc = 0x22BF7Cu;
            goto label_22bf7c;
        }
    }
    ctx->pc = 0x22BF60u;
    // 0x22bf60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x22BF60u;
    {
        const bool branch_taken_0x22bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF60u;
        // 0x22bf64: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf60) {
            ctx->pc = 0x22C07Cu;
            goto label_22c07c;
        }
    }
    ctx->pc = 0x22BF68u;
label_22bf68:
    // 0x22bf68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22bf6c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22BF6Cu;
    {
        const bool branch_taken_0x22bf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF6Cu;
        // 0x22bf70: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf6c) {
            ctx->pc = 0x22C000u;
            goto label_22c000;
        }
    }
    ctx->pc = 0x22BF74u;
    // 0x22bf74: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22C07Cu;
            goto label_22c07c;
        }
    }
    ctx->pc = 0x22BF7Cu;
label_22bf7c:
    // 0x22bf7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22bf7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf80: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22BF80u;
    {
        const bool branch_taken_0x22bf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF80u;
        // 0x22bf84: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf80) {
            ctx->pc = 0x22C074u;
            goto label_22c074;
        }
    }
    ctx->pc = 0x22BF88u;
label_22bf88:
    // 0x22bf88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bf8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22bf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf90: 0x8ef10004  lw          $s1, 0x4($s7)
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x22bf94: 0x2676ffff  addiu       $s6, $s3, -0x1
    ctx->pc = 0x22bf94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x22bf98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22BF98u;
    {
        const bool branch_taken_0x22bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF98u;
        // 0x22bf9c: 0x242a021  addu        $s4, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf98) {
            ctx->pc = 0x22BFDCu;
            goto label_22bfdc;
        }
    }
    ctx->pc = 0x22BFA0u;
label_22bfa0:
    // 0x22bfa0: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x22bfa0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bfa4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22bfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22bfa8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x22bfa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22bfac: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x22bfacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x22bfb0: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22BFB0u;
    SET_GPR_U32(ctx, 31, 0x22BFB8u);
    ctx->pc = 0x22BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFB0u;
    // 0x22bfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22BFB0u, 0x22BFB8u)) {
        return;
    }
    ctx->pc = 0x22BFB8u;
label_22bfb8:
    // 0x22bfb8: 0x8ea54000  lw          $a1, 0x4000($s5)
    ctx->pc = 0x22bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16384)));
    // 0x22bfbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22bfbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfc0: 0x8f8783f8  lw          $a3, -0x7C08($gp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22bfc4: 0xc08af80  jal         func_22BE00
    ctx->pc = 0x22BFC4u;
    SET_GPR_U32(ctx, 31, 0x22BFCCu);
    ctx->pc = 0x22BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFC4u;
    // 0x22bfc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BE00u, 0x22BFC4u, 0x22BFCCu)) {
        return;
    }
    ctx->pc = 0x22BFCCu;
label_22bfcc:
    // 0x22bfcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22bfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfd4: 0xc08adb8  jal         func_22B6E0
    ctx->pc = 0x22BFD4u;
    SET_GPR_U32(ctx, 31, 0x22BFDCu);
    ctx->pc = 0x22BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFD4u;
    // 0x22bfd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B6E0u, 0x22BFD4u, 0x22BFDCu)) {
        return;
    }
    ctx->pc = 0x22BFDCu;
label_22bfdc:
    // 0x22bfdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22bfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfe0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22BFE0u;
    {
        const bool branch_taken_0x22bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFE0u;
        // 0x22bfe4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfe0) {
            ctx->pc = 0x22BFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bfa0;
        }
    }
    ctx->pc = 0x22BFE8u;
    // 0x22bfe8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bff0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22BFF0u;
    {
        const bool branch_taken_0x22bff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff0) {
            ctx->pc = 0x22BF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bf88;
        }
    }
    ctx->pc = 0x22BFF8u;
    // 0x22bff8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22BFF8u;
    {
        const bool branch_taken_0x22bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF8u;
        // 0x22bffc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff8) {
            ctx->pc = 0x22C078u;
            goto label_22c078;
        }
    }
    ctx->pc = 0x22C000u;
label_22c000:
    // 0x22c000: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22c000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c004: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22C004u;
    {
        const bool branch_taken_0x22c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C004u;
        // 0x22c008: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c004) {
            ctx->pc = 0x22C074u;
            goto label_22c074;
        }
    }
    ctx->pc = 0x22C00Cu;
    // 0x22c00c: 0x0  nop
    ctx->pc = 0x22c00cu;
    // NOP
label_22c010:
    // 0x22c010: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c018: 0x8ef10004  lw          $s1, 0x4($s7)
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x22c01c: 0x2676ffff  addiu       $s6, $s3, -0x1
    ctx->pc = 0x22c01cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x22c020: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22C020u;
    {
        const bool branch_taken_0x22c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C020u;
        // 0x22c024: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c020) {
            ctx->pc = 0x22C058u;
            goto label_22c058;
        }
    }
    ctx->pc = 0x22C028u;
label_22c028:
    // 0x22c028: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22C028u;
    SET_GPR_U32(ctx, 31, 0x22C030u);
    ctx->pc = 0x22C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C028u;
    // 0x22c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22C028u, 0x22C030u)) {
        return;
    }
    ctx->pc = 0x22C030u;
label_22c030:
    // 0x22c030: 0x8ea54000  lw          $a1, 0x4000($s5)
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16384)));
    // 0x22c034: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22c034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c038: 0x8f8783f8  lw          $a3, -0x7C08($gp)
    ctx->pc = 0x22c038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22c03c: 0xc08af80  jal         func_22BE00
    ctx->pc = 0x22C03Cu;
    SET_GPR_U32(ctx, 31, 0x22C044u);
    ctx->pc = 0x22C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C03Cu;
    // 0x22c040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BE00u, 0x22C03Cu, 0x22C044u)) {
        return;
    }
    ctx->pc = 0x22C044u;
label_22c044:
    // 0x22c044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c04c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c050: 0xc08adb8  jal         func_22B6E0
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B6E0u, 0x22C050u, 0x22C058u)) {
        return;
    }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22c058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c05c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22C05Cu;
    {
        const bool branch_taken_0x22c05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C05Cu;
        // 0x22c060: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c05c) {
            ctx->pc = 0x22C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c028;
        }
    }
    ctx->pc = 0x22C064u;
    // 0x22c064: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22c064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c068: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c06c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22C06Cu;
    {
        const bool branch_taken_0x22c06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C06Cu;
        // 0x22c070: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c06c) {
            ctx->pc = 0x22C010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c010;
        }
    }
    ctx->pc = 0x22C074u;
label_22c074:
    // 0x22c074: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22c074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22c078:
    // 0x22c078: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22c078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22c07c:
    // 0x22c07c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22c07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c080: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x22c080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c084: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22c084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c088: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c08c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x22c08cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c090: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x22c090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c094: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x22c094u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c09c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0A0u;
        // 0x22c0a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C0A8u;
}
