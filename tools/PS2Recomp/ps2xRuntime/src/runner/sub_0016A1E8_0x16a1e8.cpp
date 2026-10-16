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

// Function: sub_0016A1E8
// Address: 0x16a1e8 - 0x16a260
void sub_0016A1E8_0x16a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A1E8_0x16a1e8");
#endif

    switch (ctx->pc) {
        case 0x16a210u: goto label_16a210;
        case 0x16a234u: goto label_16a234;
        case 0x16a24cu: goto label_16a24c;
        default: break;
    }

    ctx->pc = 0x16a1e8u;

    // 0x16a1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a1ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16a1f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a1f4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16A1F4u;
    {
        const bool branch_taken_0x16a1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1F4u;
        // 0x16a1f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1f4) {
            ctx->pc = 0x16A24Cu;
            goto label_16a24c;
        }
    }
    ctx->pc = 0x16A1FCu;
    // 0x16a1fc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A1FCu;
    {
        const bool branch_taken_0x16a1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1FCu;
        // 0x16a200: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1fc) {
            ctx->pc = 0x16A23Cu;
            goto label_16a23c;
        }
    }
    ctx->pc = 0x16A204u;
    // 0x16a204: 0x261045a0  addiu       $s0, $s0, 0x45A0
    ctx->pc = 0x16a204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17824));
    // 0x16a208: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16A208u;
    SET_GPR_U32(ctx, 31, 0x16A210u);
    ctx->pc = 0x16A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A208u;
    // 0x16a20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16A208u, 0x16A210u)) {
        return;
    }
    ctx->pc = 0x16A210u;
label_16a210:
    // 0x16a210: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16a214: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16a218: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16a21c: 0xac62f638  sw          $v0, -0x9C8($v1)
    ctx->pc = 0x16a21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF638u, _value); } while (0);
    // 0x16a220: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x16a224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0x24c6a260  addiu       $a2, $a2, -0x5DA0
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943328));
    // 0x16a22c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16A22Cu;
    SET_GPR_U32(ctx, 31, 0x16A234u);
    ctx->pc = 0x16A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A22Cu;
    // 0x16a230: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16A22Cu, 0x16A234u)) {
        return;
    }
    ctx->pc = 0x16A234u;
label_16a234:
    // 0x16a234: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A234u;
    {
        const bool branch_taken_0x16a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A234u;
        // 0x16a238: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a234) {
            ctx->pc = 0x16A250u;
            goto label_16a250;
        }
    }
    ctx->pc = 0x16A23Cu;
label_16a23c:
    // 0x16a23c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16a240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a244: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16A244u;
    SET_GPR_U32(ctx, 31, 0x16A24Cu);
    ctx->pc = 0x16A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A244u;
    // 0x16a248: 0x2484f640  addiu       $a0, $a0, -0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16A244u, 0x16A24Cu)) {
        return;
    }
    ctx->pc = 0x16A24Cu;
label_16a24c:
    // 0x16a24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a250:
    // 0x16a250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a254: 0x3e00008  jr          $ra
    ctx->pc = 0x16A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A254u;
        // 0x16a258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A25Cu;
    // 0x16a25c: 0x0  nop
    ctx->pc = 0x16a25cu;
    // NOP
    ctx->pc = 0x16a260u;
}
