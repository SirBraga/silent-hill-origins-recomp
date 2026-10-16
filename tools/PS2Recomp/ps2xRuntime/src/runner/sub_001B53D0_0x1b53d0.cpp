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

// Function: sub_001B53D0
// Address: 0x1b53d0 - 0x1b5448
void sub_001B53D0_0x1b53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B53D0_0x1b53d0");
#endif

    switch (ctx->pc) {
        case 0x1b53d0u: goto label_1b53d0;
        case 0x1b53d4u: goto label_1b53d4;
        case 0x1b53d8u: goto label_1b53d8;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53e0u: goto label_1b53e0;
        case 0x1b53e4u: goto label_1b53e4;
        case 0x1b53e8u: goto label_1b53e8;
        case 0x1b53ecu: goto label_1b53ec;
        case 0x1b53f0u: goto label_1b53f0;
        case 0x1b53f4u: goto label_1b53f4;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b53fcu: goto label_1b53fc;
        case 0x1b5400u: goto label_1b5400;
        case 0x1b5404u: goto label_1b5404;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b540cu: goto label_1b540c;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b5418u: goto label_1b5418;
        case 0x1b541cu: goto label_1b541c;
        case 0x1b5420u: goto label_1b5420;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5428u: goto label_1b5428;
        case 0x1b542cu: goto label_1b542c;
        case 0x1b5430u: goto label_1b5430;
        case 0x1b5434u: goto label_1b5434;
        case 0x1b5438u: goto label_1b5438;
        case 0x1b543cu: goto label_1b543c;
        case 0x1b5440u: goto label_1b5440;
        case 0x1b5444u: goto label_1b5444;
        default: break;
    }

    ctx->pc = 0x1b53d0u;

label_1b53d0:
    // 0x1b53d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b53d4:
    // 0x1b53d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b53d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b53d8:
    // 0x1b53d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b53dc:
    // 0x1b53dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b53dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b53e0:
    // 0x1b53e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b53e4:
    // 0x1b53e4: 0x8e06037c  lw          $a2, 0x37C($s0)
    ctx->pc = 0x1b53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
label_1b53e8:
    // 0x1b53e8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b53ec:
    // 0x1b53ec: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b53ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b53f0:
    // 0x1b53f0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b53f4:
    // 0x1b53f4: 0x60f809  jalr        $v1
label_1b53f8:
    if (ctx->pc == 0x1B53F8u) {
        ctx->pc = 0x1B53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53F4u;
        // 0x1b53f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53FCu;
        goto label_1b53fc;
    }
    ctx->pc = 0x1B53F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B53FCu);
        ctx->pc = 0x1B53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53F4u;
        // 0x1b53f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B53F4u, 0x1B53FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B53FCu;
label_1b53fc:
    // 0x1b53fc: 0x8e060270  lw          $a2, 0x270($s0)
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1b5400:
    // 0x1b5400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5404:
    // 0x1b5404: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5408:
    // 0x1b5408: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b540c:
    // 0x1b540c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5410:
    // 0x1b5410: 0x60f809  jalr        $v1
label_1b5414:
    if (ctx->pc == 0x1B5414u) {
        ctx->pc = 0x1B5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5410u;
        // 0x1b5414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5418u;
        goto label_1b5418;
    }
    ctx->pc = 0x1B5410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5418u);
        ctx->pc = 0x1B5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5410u;
        // 0x1b5414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5410u, 0x1B5418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5418u;
label_1b5418:
    // 0x1b5418: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x1b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b541c:
    // 0x1b541c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b541cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5420:
    // 0x1b5420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b5424:
    // 0x1b5424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5428:
    // 0x1b5428: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b542c:
    // 0x1b542c: 0xc07cd92  jal         func_1F3648
label_1b5430:
    if (ctx->pc == 0x1B5430u) {
        ctx->pc = 0x1B5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B542Cu;
        // 0x1b5430: 0x8c440340  lw          $a0, 0x340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5434u;
        goto label_1b5434;
    }
    ctx->pc = 0x1B542Cu;
    SET_GPR_U32(ctx, 31, 0x1B5434u);
    ctx->pc = 0x1B5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B542Cu;
    // 0x1b5430: 0x8c440340  lw          $a0, 0x340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B542Cu, 0x1B5434u)) {
        return;
    }
    ctx->pc = 0x1B5434u;
label_1b5434:
    // 0x1b5434: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1b5434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1b5438:
    // 0x1b5438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b543c:
    // 0x1b543c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5440:
    // 0x1b5440: 0x3e00008  jr          $ra
label_1b5444:
    if (ctx->pc == 0x1B5444u) {
        ctx->pc = 0x1B5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5440u;
        // 0x1b5444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5448u;
        goto label_fallthrough_0x1b5440;
    }
    ctx->pc = 0x1B5440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5440u;
        // 0x1b5444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5440:
    ctx->pc = 0x1B5448u;
}
