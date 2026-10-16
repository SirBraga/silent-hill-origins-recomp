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

// Function: sub_0019FD90
// Address: 0x19fd90 - 0x19feb8
void sub_0019FD90_0x19fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FD90_0x19fd90");
#endif

    switch (ctx->pc) {
        case 0x19fdc8u: goto label_19fdc8;
        case 0x19fde0u: goto label_19fde0;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fe24u: goto label_19fe24;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe4cu: goto label_19fe4c;
        case 0x19fe60u: goto label_19fe60;
        case 0x19fe80u: goto label_19fe80;
        default: break;
    }

    ctx->pc = 0x19fd90u;

    // 0x19fd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19fd94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19fd98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19fd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19fda4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19fdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fdb0: 0x8e230804  lw          $v1, 0x804($s1)
    ctx->pc = 0x19fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x19fdb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fdb8: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19FDB8u;
    {
        const bool branch_taken_0x19fdb8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDB8u;
        // 0x19fdbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdb8) {
            ctx->pc = 0x19FE10u;
            goto label_19fe10;
        }
    }
    ctx->pc = 0x19FDC0u;
    // 0x19fdc0: 0x8e230844  lw          $v1, 0x844($s1)
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
    // 0x19fdc4: 0x0  nop
    ctx->pc = 0x19fdc4u;
    // NOP
label_19fdc8:
    // 0x19fdc8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19fdcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fdd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fdd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD4u;
        // 0x19fdd8: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FDF8u;
            goto label_19fdf8;
        }
    }
    ctx->pc = 0x19FDDCu;
    // 0x19fddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fde0:
    // 0x19fde0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19FDE0u;
    SET_GPR_U32(ctx, 31, 0x19FDE8u);
    ctx->pc = 0x19FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDE0u;
    // 0x19fde4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19FDE0u, 0x19FDE8u)) {
        return;
    }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0x0  nop
    ctx->pc = 0x19fde8u;
    // NOP
    // 0x19fdec: 0x0  nop
    ctx->pc = 0x19fdecu;
    // NOP
    // 0x19fdf0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19FDF0u;
    {
        const bool branch_taken_0x19fdf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF0u;
        // 0x19fdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdf0) {
            ctx->pc = 0x19FDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fde0;
        }
    }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x8e230804  lw          $v1, 0x804($s1)
    ctx->pc = 0x19fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x19fdfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe04: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19fe04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19fe08: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19FE08u;
    {
        const bool branch_taken_0x19fe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe08) {
            ctx->pc = 0x19FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE08u;
            // 0x19fe0c: 0x8e230844  lw          $v1, 0x844($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fdc8;
        }
    }
    ctx->pc = 0x19FE10u;
label_19fe10:
    // 0x19fe10: 0x8e240808  lw          $a0, 0x808($s1)
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2056)));
    // 0x19fe14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE14u;
    {
        const bool branch_taken_0x19fe14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe14) {
            ctx->pc = 0x19FE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE14u;
            // 0x19fe18: 0x8e240844  lw          $a0, 0x844($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FE1Cu;
    // 0x19fe1c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x19FE1Cu;
    SET_GPR_U32(ctx, 31, 0x19FE24u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x19FE1Cu, 0x19FE24u)) {
        return;
    }
    ctx->pc = 0x19FE24u;
label_19fe24:
    // 0x19fe24: 0x8e240844  lw          $a0, 0x844($s1)
    ctx->pc = 0x19fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2116)));
label_19fe28:
    // 0x19fe28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE28u;
    {
        const bool branch_taken_0x19fe28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE28u;
        // 0x19fe2c: 0xae200808  sw          $zero, 0x808($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe28) {
            ctx->pc = 0x19FE38u;
            goto label_19fe38;
        }
    }
    ctx->pc = 0x19FE30u;
    // 0x19fe30: 0xc0808d4  jal         func_202350
    ctx->pc = 0x19FE30u;
    SET_GPR_U32(ctx, 31, 0x19FE38u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x19FE30u, 0x19FE38u)) {
        return;
    }
    ctx->pc = 0x19FE38u;
label_19fe38:
    // 0x19fe38: 0x8e24084c  lw          $a0, 0x84C($s1)
    ctx->pc = 0x19fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
    // 0x19fe3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE3Cu;
    {
        const bool branch_taken_0x19fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE3Cu;
        // 0x19fe40: 0xae200844  sw          $zero, 0x844($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe3c) {
            ctx->pc = 0x19FE4Cu;
            goto label_19fe4c;
        }
    }
    ctx->pc = 0x19FE44u;
    // 0x19fe44: 0xc0808d4  jal         func_202350
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x19FE44u, 0x19FE4Cu)) {
        return;
    }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x8e240848  lw          $a0, 0x848($s1)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x19fe50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE50u;
    {
        const bool branch_taken_0x19fe50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE50u;
        // 0x19fe54: 0xae20084c  sw          $zero, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe50) {
            ctx->pc = 0x19FE60u;
            goto label_19fe60;
        }
    }
    ctx->pc = 0x19FE58u;
    // 0x19fe58: 0xc0808d4  jal         func_202350
    ctx->pc = 0x19FE58u;
    SET_GPR_U32(ctx, 31, 0x19FE60u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x19FE58u, 0x19FE60u)) {
        return;
    }
    ctx->pc = 0x19FE60u;
label_19fe60:
    // 0x19fe60: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x19fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x19fe64: 0xae200848  sw          $zero, 0x848($s1)
    ctx->pc = 0x19fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 0));
    // 0x19fe68: 0xae200804  sw          $zero, 0x804($s1)
    ctx->pc = 0x19fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2052), GPR_U32(ctx, 0));
    // 0x19fe6c: 0xae200800  sw          $zero, 0x800($s1)
    ctx->pc = 0x19fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 0));
    // 0x19fe70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FE70u;
    {
        const bool branch_taken_0x19fe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE70u;
        // 0x19fe74: 0xae20084c  sw          $zero, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe70) {
            ctx->pc = 0x19FE80u;
            goto label_19fe80;
        }
    }
    ctx->pc = 0x19FE78u;
    // 0x19fe78: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19FE78u;
    SET_GPR_U32(ctx, 31, 0x19FE80u);
    ctx->pc = 0x19FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE78u;
    // 0x19fe7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19FE78u, 0x19FE80u)) {
        return;
    }
    ctx->pc = 0x19FE80u;
label_19fe80:
    // 0x19fe80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19fe80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fe84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19fe84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fe88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fe88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fe8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19fe8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fe90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe94: 0x3e00008  jr          $ra
    ctx->pc = 0x19FE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE94u;
        // 0x19fe98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FE9Cu;
    // 0x19fe9c: 0x0  nop
    ctx->pc = 0x19fe9cu;
    // NOP
    // 0x19fea0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19fea4: 0x0  nop
    ctx->pc = 0x19fea4u;
    // NOP
    // 0x19fea8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x19fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19feac: 0x0  nop
    ctx->pc = 0x19feacu;
    // NOP
    // 0x19feb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19feb4: 0x0  nop
    ctx->pc = 0x19feb4u;
    // NOP
    ctx->pc = 0x19feb8u;
}
