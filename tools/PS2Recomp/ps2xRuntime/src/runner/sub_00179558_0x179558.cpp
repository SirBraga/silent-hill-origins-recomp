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

// Function: sub_00179558
// Address: 0x179558 - 0x1795e8
void sub_00179558_0x179558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179558_0x179558");
#endif

    switch (ctx->pc) {
        case 0x179558u: goto label_179558;
        case 0x17955cu: goto label_17955c;
        case 0x179560u: goto label_179560;
        case 0x179564u: goto label_179564;
        case 0x179568u: goto label_179568;
        case 0x17956cu: goto label_17956c;
        case 0x179570u: goto label_179570;
        case 0x179574u: goto label_179574;
        case 0x179578u: goto label_179578;
        case 0x17957cu: goto label_17957c;
        case 0x179580u: goto label_179580;
        case 0x179584u: goto label_179584;
        case 0x179588u: goto label_179588;
        case 0x17958cu: goto label_17958c;
        case 0x179590u: goto label_179590;
        case 0x179594u: goto label_179594;
        case 0x179598u: goto label_179598;
        case 0x17959cu: goto label_17959c;
        case 0x1795a0u: goto label_1795a0;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795a8u: goto label_1795a8;
        case 0x1795acu: goto label_1795ac;
        case 0x1795b0u: goto label_1795b0;
        case 0x1795b4u: goto label_1795b4;
        case 0x1795b8u: goto label_1795b8;
        case 0x1795bcu: goto label_1795bc;
        case 0x1795c0u: goto label_1795c0;
        case 0x1795c4u: goto label_1795c4;
        case 0x1795c8u: goto label_1795c8;
        case 0x1795ccu: goto label_1795cc;
        case 0x1795d0u: goto label_1795d0;
        case 0x1795d4u: goto label_1795d4;
        case 0x1795d8u: goto label_1795d8;
        case 0x1795dcu: goto label_1795dc;
        case 0x1795e0u: goto label_1795e0;
        case 0x1795e4u: goto label_1795e4;
        default: break;
    }

    ctx->pc = 0x179558u;

label_179558:
    // 0x179558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17955c:
    // 0x17955c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_179560:
    // 0x179560: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x179560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_179564:
    // 0x179564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179568:
    // 0x179568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17956c:
    // 0x17956c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_179570:
    // 0x179570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_179574:
    // 0x179574: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x179574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_179578:
    // 0x179578: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
label_17957c:
    if (ctx->pc == 0x17957Cu) {
        ctx->pc = 0x17957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179578u;
        // 0x17957c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179580u;
        goto label_179580;
    }
    ctx->pc = 0x179578u;
    {
        const bool branch_taken_0x179578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x17957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179578u;
        // 0x17957c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179578) {
            ctx->pc = 0x17959Cu;
            goto label_17959c;
        }
    }
    ctx->pc = 0x179580u;
label_179580:
    // 0x179580: 0xc05e57a  jal         func_1795E8
label_179584:
    if (ctx->pc == 0x179584u) {
        ctx->pc = 0x179588u;
        goto label_179588;
    }
    ctx->pc = 0x179580u;
    SET_GPR_U32(ctx, 31, 0x179588u);
    ctx->pc = 0x1795E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1795E8u, 0x179580u, 0x179588u)) {
        return;
    }
    ctx->pc = 0x179588u;
label_179588:
    // 0x179588: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_17958c:
    // 0x17958c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x17958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_179590:
    // 0x179590: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_179594:
    // 0x179594: 0x40f809  jalr        $v0
label_179598:
    if (ctx->pc == 0x179598u) {
        ctx->pc = 0x179598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179594u;
        // 0x179598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17959Cu;
        goto label_17959c;
    }
    ctx->pc = 0x179594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17959Cu);
        ctx->pc = 0x179598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179594u;
        // 0x179598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179594u, 0x17959Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17959Cu;
label_17959c:
    // 0x17959c: 0xc0771ba  jal         func_1DC6E8
label_1795a0:
    if (ctx->pc == 0x1795A0u) {
        ctx->pc = 0x1795A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17959Cu;
        // 0x1795a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795A4u;
        goto label_1795a4;
    }
    ctx->pc = 0x17959Cu;
    SET_GPR_U32(ctx, 31, 0x1795A4u);
    ctx->pc = 0x1795A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17959Cu;
    // 0x1795a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC6E8u, 0x17959Cu, 0x1795A4u)) {
        return;
    }
    ctx->pc = 0x1795A4u;
label_1795a4:
    // 0x1795a4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1795a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1795a8:
    // 0x1795a8: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_1795ac:
    if (ctx->pc == 0x1795ACu) {
        ctx->pc = 0x1795B0u;
        goto label_1795b0;
    }
    ctx->pc = 0x1795A8u;
    {
        const bool branch_taken_0x1795a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1795a8) {
            ctx->pc = 0x1795B8u;
            goto label_1795b8;
        }
    }
    ctx->pc = 0x1795B0u;
label_1795b0:
    // 0x1795b0: 0xc05e598  jal         func_179660
label_1795b4:
    if (ctx->pc == 0x1795B4u) {
        ctx->pc = 0x1795B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B0u;
        // 0x1795b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795B8u;
        goto label_1795b8;
    }
    ctx->pc = 0x1795B0u;
    SET_GPR_U32(ctx, 31, 0x1795B8u);
    ctx->pc = 0x1795B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795B0u;
    // 0x1795b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179660u, 0x1795B0u, 0x1795B8u)) {
        return;
    }
    ctx->pc = 0x1795B8u;
label_1795b8:
    // 0x1795b8: 0xc058178  jal         func_1605E0
label_1795bc:
    if (ctx->pc == 0x1795BCu) {
        ctx->pc = 0x1795BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B8u;
        // 0x1795bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795C0u;
        goto label_1795c0;
    }
    ctx->pc = 0x1795B8u;
    SET_GPR_U32(ctx, 31, 0x1795C0u);
    ctx->pc = 0x1795BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795B8u;
    // 0x1795bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1605E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1605E0u, 0x1795B8u, 0x1795C0u)) {
        return;
    }
    ctx->pc = 0x1795C0u;
label_1795c0:
    // 0x1795c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1795c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1795c4:
    // 0x1795c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1795c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1795c8:
    // 0x1795c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1795c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1795cc:
    // 0x1795cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1795ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1795d0:
    // 0x1795d0: 0x3e00008  jr          $ra
label_1795d4:
    if (ctx->pc == 0x1795D4u) {
        ctx->pc = 0x1795D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795D0u;
        // 0x1795d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795D8u;
        goto label_1795d8;
    }
    ctx->pc = 0x1795D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795D0u;
        // 0x1795d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795D8u;
label_1795d8:
    // 0x1795d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1795dc:
    // 0x1795dc: 0x0  nop
    ctx->pc = 0x1795dcu;
    // NOP
label_1795e0:
    // 0x1795e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1795e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1795e4:
    // 0x1795e4: 0x0  nop
    ctx->pc = 0x1795e4u;
    // NOP
    ctx->pc = 0x1795e8u;
}
