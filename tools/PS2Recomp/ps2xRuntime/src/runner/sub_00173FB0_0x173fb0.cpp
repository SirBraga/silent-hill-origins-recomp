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

// Function: sub_00173FB0
// Address: 0x173fb0 - 0x174028
void sub_00173FB0_0x173fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173FB0_0x173fb0");
#endif

    switch (ctx->pc) {
        case 0x173fd8u: goto label_173fd8;
        case 0x173ffcu: goto label_173ffc;
        case 0x174014u: goto label_174014;
        default: break;
    }

    ctx->pc = 0x173fb0u;

    // 0x173fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173fb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x173fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x173fb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173fbc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x173FBCu;
    {
        const bool branch_taken_0x173fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x173FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FBCu;
        // 0x173fc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fbc) {
            ctx->pc = 0x174014u;
            goto label_174014;
        }
    }
    ctx->pc = 0x173FC4u;
    // 0x173fc4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x173FC4u;
    {
        const bool branch_taken_0x173fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FC4u;
        // 0x173fc8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fc4) {
            ctx->pc = 0x174004u;
            goto label_174004;
        }
    }
    ctx->pc = 0x173FCCu;
    // 0x173fcc: 0x26105e40  addiu       $s0, $s0, 0x5E40
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24128));
    // 0x173fd0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x173FD0u;
    SET_GPR_U32(ctx, 31, 0x173FD8u);
    ctx->pc = 0x173FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FD0u;
    // 0x173fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x173FD0u, 0x173FD8u)) {
        return;
    }
    ctx->pc = 0x173FD8u;
label_173fd8:
    // 0x173fd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x173fdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x173fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173fe0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x173fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x173fe4: 0xac62f7d0  sw          $v0, -0x830($v1)
    ctx->pc = 0x173fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7D0u, _value); } while (0);
    // 0x173fe8: 0x2484f7d8  addiu       $a0, $a0, -0x828
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965208));
    // 0x173fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ff0: 0x24c64028  addiu       $a2, $a2, 0x4028
    ctx->pc = 0x173ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16424));
    // 0x173ff4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x173FF4u;
    SET_GPR_U32(ctx, 31, 0x173FFCu);
    ctx->pc = 0x173FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF4u;
    // 0x173ff8: 0x240700ec  addiu       $a3, $zero, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x173FF4u, 0x173FFCu)) {
        return;
    }
    ctx->pc = 0x173FFCu;
label_173ffc:
    // 0x173ffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173FFCu;
    {
        const bool branch_taken_0x173ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FFCu;
        // 0x174000: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ffc) {
            ctx->pc = 0x174018u;
            goto label_174018;
        }
    }
    ctx->pc = 0x174004u;
label_174004:
    // 0x174004: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x174004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x174008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17400c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17400Cu;
    SET_GPR_U32(ctx, 31, 0x174014u);
    ctx->pc = 0x174010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17400Cu;
    // 0x174010: 0x2484f7d8  addiu       $a0, $a0, -0x828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17400Cu, 0x174014u)) {
        return;
    }
    ctx->pc = 0x174014u;
label_174014:
    // 0x174014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174018:
    // 0x174018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17401c: 0x3e00008  jr          $ra
    ctx->pc = 0x17401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17401Cu;
        // 0x174020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174024u;
    // 0x174024: 0x0  nop
    ctx->pc = 0x174024u;
    // NOP
    ctx->pc = 0x174028u;
}
