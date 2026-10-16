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

// Function: sub_00146678
// Address: 0x146678 - 0x146730
void sub_00146678_0x146678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146678_0x146678");
#endif

    switch (ctx->pc) {
        case 0x1466a0u: goto label_1466a0;
        case 0x1466c4u: goto label_1466c4;
        case 0x1466d4u: goto label_1466d4;
        case 0x1466f8u: goto label_1466f8;
        case 0x146710u: goto label_146710;
        case 0x146720u: goto label_146720;
        default: break;
    }

    ctx->pc = 0x146678u;

    // 0x146678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14667c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x146680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146684: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x146684u;
    {
        const bool branch_taken_0x146684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x146688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146684u;
        // 0x146688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146684) {
            ctx->pc = 0x146720u;
            goto label_146720;
        }
    }
    ctx->pc = 0x14668Cu;
    // 0x14668c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14668Cu;
    {
        const bool branch_taken_0x14668c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14668Cu;
        // 0x146690: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14668c) {
            ctx->pc = 0x146700u;
            goto label_146700;
        }
    }
    ctx->pc = 0x146694u;
    // 0x146694: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x146694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x146698: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x146698u;
    SET_GPR_U32(ctx, 31, 0x1466A0u);
    ctx->pc = 0x14669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146698u;
    // 0x14669c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x146698u, 0x1466A0u)) {
        return;
    }
    ctx->pc = 0x1466A0u;
label_1466a0:
    // 0x1466a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1466a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1466a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1466a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1466a8: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1466a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1466ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1466acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466b0: 0x24c66730  addiu       $a2, $a2, 0x6730
    ctx->pc = 0x1466b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26416));
    // 0x1466b4: 0xac624880  sw          $v0, 0x4880($v1)
    ctx->pc = 0x1466b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4880u, _value); } while (0);
    // 0x1466b8: 0x240701f0  addiu       $a3, $zero, 0x1F0
    ctx->pc = 0x1466b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x1466bc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1466BCu;
    SET_GPR_U32(ctx, 31, 0x1466C4u);
    ctx->pc = 0x1466C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466BCu;
    // 0x1466c0: 0x24844888  addiu       $a0, $a0, 0x4888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1466BCu, 0x1466C4u)) {
        return;
    }
    ctx->pc = 0x1466C4u;
label_1466c4:
    // 0x1466c4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1466c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1466c8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
    // 0x1466cc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1466CCu;
    SET_GPR_U32(ctx, 31, 0x1466D4u);
    ctx->pc = 0x1466D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466CCu;
    // 0x1466d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1466CCu, 0x1466D4u)) {
        return;
    }
    ctx->pc = 0x1466D4u;
label_1466d4:
    // 0x1466d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1466d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1466d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1466dc: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1466e0: 0xac62488c  sw          $v0, 0x488C($v1)
    ctx->pc = 0x1466e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B488Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B488Cu, _value); } while (0);
    // 0x1466e4: 0x24844890  addiu       $a0, $a0, 0x4890
    ctx->pc = 0x1466e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x1466e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1466e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466ec: 0x24c66780  addiu       $a2, $a2, 0x6780
    ctx->pc = 0x1466ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26496));
    // 0x1466f0: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1466F0u;
    SET_GPR_U32(ctx, 31, 0x1466F8u);
    ctx->pc = 0x1466F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466F0u;
    // 0x1466f4: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1466F0u, 0x1466F8u)) {
        return;
    }
    ctx->pc = 0x1466F8u;
label_1466f8:
    // 0x1466f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1466F8u;
    {
        const bool branch_taken_0x1466f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466F8u;
        // 0x1466fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466f8) {
            ctx->pc = 0x146724u;
            goto label_146724;
        }
    }
    ctx->pc = 0x146700u;
label_146700:
    // 0x146700: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x146700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x146704: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146708: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x146708u;
    SET_GPR_U32(ctx, 31, 0x146710u);
    ctx->pc = 0x14670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146708u;
    // 0x14670c: 0x24844890  addiu       $a0, $a0, 0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x146708u, 0x146710u)) {
        return;
    }
    ctx->pc = 0x146710u;
label_146710:
    // 0x146710: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x146710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x146714: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146718: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x146718u;
    SET_GPR_U32(ctx, 31, 0x146720u);
    ctx->pc = 0x14671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146718u;
    // 0x14671c: 0x24844888  addiu       $a0, $a0, 0x4888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x146718u, 0x146720u)) {
        return;
    }
    ctx->pc = 0x146720u;
label_146720:
    // 0x146720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_146724:
    // 0x146724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146728: 0x3e00008  jr          $ra
    ctx->pc = 0x146728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146728u;
        // 0x14672c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146730u;
}
