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

// Function: sub_002501A8
// Address: 0x2501a8 - 0x250250
void sub_002501A8_0x2501a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002501A8_0x2501a8");
#endif

    switch (ctx->pc) {
        case 0x2501ccu: goto label_2501cc;
        case 0x2501fcu: goto label_2501fc;
        case 0x250224u: goto label_250224;
        default: break;
    }

    ctx->pc = 0x2501a8u;

    // 0x2501a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2501a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2501ac: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2501acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2501b0: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2501b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2501b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2501b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2501b8: 0x24c6fae8  addiu       $a2, $a2, -0x518
    ctx->pc = 0x2501b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965992));
    // 0x2501bc: 0x24e7fbc0  addiu       $a3, $a3, -0x440
    ctx->pc = 0x2501bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966208));
    // 0x2501c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2501c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501c4: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2501C4u;
    SET_GPR_U32(ctx, 31, 0x2501CCu);
    ctx->pc = 0x2501C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C4u;
    // 0x2501c8: 0x2405011e  addiu       $a1, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2501C4u, 0x2501CCu)) {
        return;
    }
    ctx->pc = 0x2501CCu;
label_2501cc:
    // 0x2501cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2501CCu;
    {
        const bool branch_taken_0x2501cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2501D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501CCu;
        // 0x2501d0: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501cc) {
            ctx->pc = 0x2501DCu;
            goto label_2501dc;
        }
    }
    ctx->pc = 0x2501D4u;
    // 0x2501d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2501D4u;
    {
        const bool branch_taken_0x2501d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D4u;
        // 0x2501d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501d4) {
            ctx->pc = 0x250240u;
            goto label_250240;
        }
    }
    ctx->pc = 0x2501DCu;
label_2501dc:
    // 0x2501dc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2501dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2501e0: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x2501e4: 0x24c6fc00  addiu       $a2, $a2, -0x400
    ctx->pc = 0x2501e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966272));
    // 0x2501e8: 0x24e7fc20  addiu       $a3, $a3, -0x3E0
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966304));
    // 0x2501ec: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x2501f0: 0x2508fcb8  addiu       $t0, $t0, -0x348
    ctx->pc = 0x2501f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966456));
    // 0x2501f4: 0xc089a24  jal         func_226890
    ctx->pc = 0x2501F4u;
    SET_GPR_U32(ctx, 31, 0x2501FCu);
    ctx->pc = 0x2501F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F4u;
    // 0x2501f8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226890u, 0x2501F4u, 0x2501FCu)) {
        return;
    }
    ctx->pc = 0x2501FCu;
label_2501fc:
    // 0x2501fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x2501fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x250200: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x250200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x250204: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x250208: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x250208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25020c: 0xac2241a0  sw          $v0, 0x41A0($at)
    ctx->pc = 0x25020cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41A0u, _value); } while (0);
    // 0x250210: 0x24a5ff28  addiu       $a1, $a1, -0xD8
    ctx->pc = 0x250210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967080));
    // 0x250214: 0x24c6fdc0  addiu       $a2, $a2, -0x240
    ctx->pc = 0x250214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966720));
    // 0x250218: 0x24e70138  addiu       $a3, $a3, 0x138
    ctx->pc = 0x250218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 312));
    // 0x25021c: 0xc088b96  jal         func_222E58
    ctx->pc = 0x25021Cu;
    SET_GPR_U32(ctx, 31, 0x250224u);
    ctx->pc = 0x250220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25021Cu;
    // 0x250220: 0x2404011e  addiu       $a0, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222E58u, 0x25021Cu, 0x250224u)) {
        return;
    }
    ctx->pc = 0x250224u;
label_250224:
    // 0x250224: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250224u;
    {
        const bool branch_taken_0x250224 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x250228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250224u;
        // 0x250228: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250224) {
            ctx->pc = 0x25023Cu;
            goto label_25023c;
        }
    }
    ctx->pc = 0x25022Cu;
    // 0x25022c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x250230: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x250230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x250234: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x250234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x250238: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x250238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_25023c:
    // 0x25023c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25023cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_250240:
    // 0x250240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250244: 0x3e00008  jr          $ra
    ctx->pc = 0x250244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250244u;
        // 0x250248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25024Cu;
    // 0x25024c: 0x0  nop
    ctx->pc = 0x25024cu;
    // NOP
    ctx->pc = 0x250250u;
}
