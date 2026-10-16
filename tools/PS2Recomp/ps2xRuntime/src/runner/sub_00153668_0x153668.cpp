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

// Function: sub_00153668
// Address: 0x153668 - 0x1536e8
void sub_00153668_0x153668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153668_0x153668");
#endif

    switch (ctx->pc) {
        case 0x153690u: goto label_153690;
        case 0x1536b4u: goto label_1536b4;
        case 0x1536ccu: goto label_1536cc;
        default: break;
    }

    ctx->pc = 0x153668u;

    // 0x153668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15366c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x153670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x153670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153674: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153674u;
    {
        const bool branch_taken_0x153674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x153678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153674u;
        // 0x153678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153674) {
            ctx->pc = 0x1536CCu;
            goto label_1536cc;
        }
    }
    ctx->pc = 0x15367Cu;
    // 0x15367c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x15367Cu;
    {
        const bool branch_taken_0x15367c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x153680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15367Cu;
        // 0x153680: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15367c) {
            ctx->pc = 0x1536BCu;
            goto label_1536bc;
        }
    }
    ctx->pc = 0x153684u;
    // 0x153684: 0x26102720  addiu       $s0, $s0, 0x2720
    ctx->pc = 0x153684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10016));
    // 0x153688: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x153688u;
    SET_GPR_U32(ctx, 31, 0x153690u);
    ctx->pc = 0x15368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153688u;
    // 0x15368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x153688u, 0x153690u)) {
        return;
    }
    ctx->pc = 0x153690u;
label_153690:
    // 0x153690: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x153694: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x153698: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x15369c: 0xac62f000  sw          $v0, -0x1000($v1)
    ctx->pc = 0x15369cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF000u, _value); } while (0);
    // 0x1536a0: 0x2484f008  addiu       $a0, $a0, -0xFF8
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963208));
    // 0x1536a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1536a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536a8: 0x24c636e8  addiu       $a2, $a2, 0x36E8
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14056));
    // 0x1536ac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1536ACu;
    SET_GPR_U32(ctx, 31, 0x1536B4u);
    ctx->pc = 0x1536B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536ACu;
    // 0x1536b0: 0x240700cc  addiu       $a3, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1536ACu, 0x1536B4u)) {
        return;
    }
    ctx->pc = 0x1536B4u;
label_1536b4:
    // 0x1536b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1536B4u;
    {
        const bool branch_taken_0x1536b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536B4u;
        // 0x1536b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536b4) {
            ctx->pc = 0x1536D0u;
            goto label_1536d0;
        }
    }
    ctx->pc = 0x1536BCu;
label_1536bc:
    // 0x1536bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1536c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1536c4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1536C4u;
    SET_GPR_U32(ctx, 31, 0x1536CCu);
    ctx->pc = 0x1536C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536C4u;
    // 0x1536c8: 0x2484f008  addiu       $a0, $a0, -0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1536C4u, 0x1536CCu)) {
        return;
    }
    ctx->pc = 0x1536CCu;
label_1536cc:
    // 0x1536cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1536ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1536d0:
    // 0x1536d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1536d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1536d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1536D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1536D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536D4u;
        // 0x1536d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1536D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1536DCu;
    // 0x1536dc: 0x0  nop
    ctx->pc = 0x1536dcu;
    // NOP
    // 0x1536e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1536e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1536e4: 0x0  nop
    ctx->pc = 0x1536e4u;
    // NOP
    ctx->pc = 0x1536e8u;
}
