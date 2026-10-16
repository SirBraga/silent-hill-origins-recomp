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

// Function: sub_0024D108
// Address: 0x24d108 - 0x24d190
void sub_0024D108_0x24d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D108_0x24d108");
#endif

    switch (ctx->pc) {
        case 0x24d144u: goto label_24d144;
        default: break;
    }

    ctx->pc = 0x24d108u;

    // 0x24d108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d10c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24d10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24d110: 0xac253f70  sw          $a1, 0x3F70($at)
    ctx->pc = 0x24d110u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F70u, _value); } while (0);
    // 0x24d114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24d118: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24d11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d120: 0x8f858548  lw          $a1, -0x7AB8($gp)
    ctx->pc = 0x24d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935880)));
    // 0x24d124: 0x8f87854c  lw          $a3, -0x7AB4($gp)
    ctx->pc = 0x24d124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935884)));
    // 0x24d128: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x24d128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x24d12c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x24d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x24d130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d134: 0x250841f8  addiu       $t0, $t0, 0x41F8
    ctx->pc = 0x24d134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16888));
    // 0x24d138: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24d138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d13c: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x24D13Cu;
    SET_GPR_U32(ctx, 31, 0x24D144u);
    ctx->pc = 0x24D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D13Cu;
    // 0x24d140: 0x35290404  ori         $t1, $t1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x24D13Cu, 0x24D144u)) {
        return;
    }
    ctx->pc = 0x24D144u;
label_24d144:
    // 0x24d144: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24d144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24d148: 0x8c843f70  lw          $a0, 0x3F70($a0)
    ctx->pc = 0x24d148u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F70u));
    // 0x24d14c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24d150: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24d154: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24d158: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D158u;
    {
        const bool branch_taken_0x24d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D158u;
        // 0x24d15c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d158) {
            ctx->pc = 0x24D17Cu;
            goto label_24d17c;
        }
    }
    ctx->pc = 0x24D160u;
    // 0x24d160: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24d160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24d164: 0x8c633f74  lw          $v1, 0x3F74($v1)
    ctx->pc = 0x24d164u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F74u));
    // 0x24d168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24d16c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24d170: 0xac233f74  sw          $v1, 0x3F74($at)
    ctx->pc = 0x24d170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F74u, _value); } while (0);
    // 0x24d174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D174u;
    {
        const bool branch_taken_0x24d174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D174u;
        // 0x24d178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d174) {
            ctx->pc = 0x24D180u;
            goto label_24d180;
        }
    }
    ctx->pc = 0x24D17Cu;
label_24d17c:
    // 0x24d17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d180:
    // 0x24d180: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24d180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d188: 0x3e00008  jr          $ra
    ctx->pc = 0x24D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D188u;
        // 0x24d18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D190u;
}
