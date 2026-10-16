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

// Function: sub_002F25B8
// Address: 0x2f25b8 - 0x2f2620
void sub_002F25B8_0x2f25b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F25B8_0x2f25b8");
#endif

    switch (ctx->pc) {
        case 0x2f25ccu: goto label_2f25cc;
        default: break;
    }

    ctx->pc = 0x2f25b8u;

    // 0x2f25b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f25bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f25c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f25c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f25c4: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F25C4u;
    SET_GPR_U32(ctx, 31, 0x2F25CCu);
    ctx->pc = 0x2F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25C4u;
    // 0x2f25c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F25C4u, 0x2F25CCu)) {
        return;
    }
    ctx->pc = 0x2F25CCu;
label_2f25cc:
    // 0x2f25cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f25d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25d4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F25D4u;
    {
        const bool branch_taken_0x2f25d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25D4u;
        // 0x2f25d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25d4) {
            ctx->pc = 0x2F260Cu;
            goto label_2f260c;
        }
    }
    ctx->pc = 0x2F25DCu;
    // 0x2f25dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f25e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f25e4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F25E4u;
    {
        const bool branch_taken_0x2f25e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25E4u;
        // 0x2f25e8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25e4) {
            ctx->pc = 0x2F2604u;
            goto label_2f2604;
        }
    }
    ctx->pc = 0x2F25ECu;
    // 0x2f25ec: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f25f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f25f4: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x2f25f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x2f25f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f25f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f25fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F25FCu;
    {
        const bool branch_taken_0x2f25fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25FCu;
        // 0x2f2600: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25fc) {
            ctx->pc = 0x2F260Cu;
            goto label_2f260c;
        }
    }
    ctx->pc = 0x2F2604u;
label_2f2604:
    // 0x2f2604: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2608: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2f2608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2f260c:
    // 0x2f260c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2614: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2614u;
        // 0x2f2618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F261Cu;
    // 0x2f261c: 0x0  nop
    ctx->pc = 0x2f261cu;
    // NOP
    ctx->pc = 0x2f2620u;
}
