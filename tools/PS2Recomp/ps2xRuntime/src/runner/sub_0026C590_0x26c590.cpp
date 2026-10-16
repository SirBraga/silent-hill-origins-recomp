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

// Function: sub_0026C590
// Address: 0x26c590 - 0x26c680
void sub_0026C590_0x26c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C590_0x26c590");
#endif

    switch (ctx->pc) {
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c638u: goto label_26c638;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c660u: goto label_26c660;
        case 0x26c670u: goto label_26c670;
        default: break;
    }

    ctx->pc = 0x26c590u;

    // 0x26c590: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c594: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c59c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26c5a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c5a4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26c5a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c5ac: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x26c5b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c5b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C5B4u;
    {
        const bool branch_taken_0x26c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5B4u;
        // 0x26c5b8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5b4) {
            ctx->pc = 0x26C5D0u;
            goto label_26c5d0;
        }
    }
    ctx->pc = 0x26C5BCu;
    // 0x26c5bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26c5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26c5c0: 0xc09c8ae  jal         func_2722B8
    ctx->pc = 0x26C5C0u;
    SET_GPR_U32(ctx, 31, 0x26C5C8u);
    ctx->pc = 0x26C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5C0u;
    // 0x26c5c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2722B8u, 0x26C5C0u, 0x26C5C8u)) {
        return;
    }
    ctx->pc = 0x26C5C8u;
label_26c5c8:
    // 0x26c5c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26C5C8u;
    {
        const bool branch_taken_0x26c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5C8u;
        // 0x26c5cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5c8) {
            ctx->pc = 0x26C678u;
            goto label_26c678;
        }
    }
    ctx->pc = 0x26C5D0u;
label_26c5d0:
    // 0x26c5d0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x26c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x26c5d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c5d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C5DCu;
    {
        const bool branch_taken_0x26c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5dc) {
            ctx->pc = 0x26C5ECu;
            goto label_26c5ec;
        }
    }
    ctx->pc = 0x26C5E4u;
    // 0x26c5e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26C5E4u;
    {
        const bool branch_taken_0x26c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5E4u;
        // 0x26c5e8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5e4) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C5ECu;
label_26c5ec:
    // 0x26c5ec: 0xc09c0da  jal         func_270368
    ctx->pc = 0x26C5ECu;
    SET_GPR_U32(ctx, 31, 0x26C5F4u);
    ctx->pc = 0x26C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5ECu;
    // 0x26c5f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270368u, 0x26C5ECu, 0x26C5F4u)) {
        return;
    }
    ctx->pc = 0x26C5F4u;
label_26c5f4:
    // 0x26c5f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x26c5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26c5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c5fc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C5FCu;
    {
        const bool branch_taken_0x26c5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5FCu;
        // 0x26c600: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5fc) {
            ctx->pc = 0x26C640u;
            goto label_26c640;
        }
    }
    ctx->pc = 0x26C604u;
    // 0x26c604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C604u;
    {
        const bool branch_taken_0x26c604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C604u;
        // 0x26c608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c604) {
            ctx->pc = 0x26C61Cu;
            goto label_26c61c;
        }
    }
    ctx->pc = 0x26C60Cu;
    // 0x26c60c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C60Cu;
    {
        const bool branch_taken_0x26c60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C60Cu;
        // 0x26c610: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c60c) {
            ctx->pc = 0x26C62Cu;
            goto label_26c62c;
        }
    }
    ctx->pc = 0x26C614u;
    // 0x26c614: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26C614u;
    {
        const bool branch_taken_0x26c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c614) {
            ctx->pc = 0x26C668u;
            goto label_26c668;
        }
    }
    ctx->pc = 0x26C61Cu;
label_26c61c:
    // 0x26c61c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C61Cu;
    {
        const bool branch_taken_0x26c61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C61Cu;
        // 0x26c620: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c61c) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C624u;
    // 0x26c624: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26C624u;
    {
        const bool branch_taken_0x26c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c624) {
            ctx->pc = 0x26C668u;
            goto label_26c668;
        }
    }
    ctx->pc = 0x26C62Cu;
label_26c62c:
    // 0x26c62c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c630: 0xc09c8ae  jal         func_2722B8
    ctx->pc = 0x26C630u;
    SET_GPR_U32(ctx, 31, 0x26C638u);
    ctx->pc = 0x26C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C630u;
    // 0x26c634: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2722B8u, 0x26C630u, 0x26C638u)) {
        return;
    }
    ctx->pc = 0x26C638u;
label_26c638:
    // 0x26c638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26C638u;
    {
        const bool branch_taken_0x26c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C638u;
        // 0x26c63c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c638) {
            ctx->pc = 0x26C678u;
            goto label_26c678;
        }
    }
    ctx->pc = 0x26C640u;
label_26c640:
    // 0x26c640: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x26c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c644: 0xc09c604  jal         func_271810
    ctx->pc = 0x26C644u;
    SET_GPR_U32(ctx, 31, 0x26C64Cu);
    ctx->pc = 0x26C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C644u;
    // 0x26c648: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271810u, 0x26C644u, 0x26C64Cu)) {
        return;
    }
    ctx->pc = 0x26C64Cu;
label_26c64c:
    // 0x26c64c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26C64Cu;
    {
        const bool branch_taken_0x26c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C64Cu;
        // 0x26c650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c64c) {
            ctx->pc = 0x26C678u;
            goto label_26c678;
        }
    }
    ctx->pc = 0x26C654u;
label_26c654:
    // 0x26c654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c658: 0xc09c8ae  jal         func_2722B8
    ctx->pc = 0x26C658u;
    SET_GPR_U32(ctx, 31, 0x26C660u);
    ctx->pc = 0x26C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C658u;
    // 0x26c65c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2722B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2722B8u, 0x26C658u, 0x26C660u)) {
        return;
    }
    ctx->pc = 0x26C660u;
label_26c660:
    // 0x26c660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C660u;
    {
        const bool branch_taken_0x26c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C660u;
        // 0x26c664: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c660) {
            ctx->pc = 0x26C674u;
            goto label_26c674;
        }
    }
    ctx->pc = 0x26C668u;
label_26c668:
    // 0x26c668: 0xc09c604  jal         func_271810
    ctx->pc = 0x26C668u;
    SET_GPR_U32(ctx, 31, 0x26C670u);
    ctx->pc = 0x26C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C668u;
    // 0x26c66c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271810u, 0x26C668u, 0x26C670u)) {
        return;
    }
    ctx->pc = 0x26C670u;
label_26c670:
    // 0x26c670: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c670u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26c674:
    // 0x26c674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c678:
    // 0x26c678: 0x3e00008  jr          $ra
    ctx->pc = 0x26C678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C678u;
        // 0x26c67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C680u;
}
