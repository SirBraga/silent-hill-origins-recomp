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

// Function: sub_00104148
// Address: 0x104148 - 0x1041c8
void sub_00104148_0x104148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104148_0x104148");
#endif

    switch (ctx->pc) {
        case 0x104170u: goto label_104170;
        case 0x104194u: goto label_104194;
        case 0x1041acu: goto label_1041ac;
        default: break;
    }

    ctx->pc = 0x104148u;

    // 0x104148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10414c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x104150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x104150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x104154: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x104154u;
    {
        const bool branch_taken_0x104154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x104158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104154u;
        // 0x104158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104154) {
            ctx->pc = 0x1041ACu;
            goto label_1041ac;
        }
    }
    ctx->pc = 0x10415Cu;
    // 0x10415c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10415Cu;
    {
        const bool branch_taken_0x10415c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10415Cu;
        // 0x104160: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10415c) {
            ctx->pc = 0x10419Cu;
            goto label_10419c;
        }
    }
    ctx->pc = 0x104164u;
    // 0x104164: 0x261097e0  addiu       $s0, $s0, -0x6820
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940640));
    // 0x104168: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x104168u;
    SET_GPR_U32(ctx, 31, 0x104170u);
    ctx->pc = 0x10416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104168u;
    // 0x10416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x104168u, 0x104170u)) {
        return;
    }
    ctx->pc = 0x104170u;
label_104170:
    // 0x104170: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x104170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x104174: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x104174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x104178: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x104178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x10417c: 0xac624208  sw          $v0, 0x4208($v1)
    ctx->pc = 0x10417cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4208u, _value); } while (0);
    // 0x104180: 0x24844210  addiu       $a0, $a0, 0x4210
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
    // 0x104184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104188: 0x24c641d0  addiu       $a2, $a2, 0x41D0
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16848));
    // 0x10418c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x10418Cu;
    SET_GPR_U32(ctx, 31, 0x104194u);
    ctx->pc = 0x104190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10418Cu;
    // 0x104190: 0x24070118  addiu       $a3, $zero, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x10418Cu, 0x104194u)) {
        return;
    }
    ctx->pc = 0x104194u;
label_104194:
    // 0x104194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104194u;
    {
        const bool branch_taken_0x104194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104194u;
        // 0x104198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104194) {
            ctx->pc = 0x1041B0u;
            goto label_1041b0;
        }
    }
    ctx->pc = 0x10419Cu;
label_10419c:
    // 0x10419c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1041a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1041a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1041a4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1041A4u;
    SET_GPR_U32(ctx, 31, 0x1041ACu);
    ctx->pc = 0x1041A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041A4u;
    // 0x1041a8: 0x24844210  addiu       $a0, $a0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1041A4u, 0x1041ACu)) {
        return;
    }
    ctx->pc = 0x1041ACu;
label_1041ac:
    // 0x1041ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1041acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1041b0:
    // 0x1041b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1041b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1041B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041B4u;
        // 0x1041b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1041B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1041BCu;
    // 0x1041bc: 0x0  nop
    ctx->pc = 0x1041bcu;
    // NOP
    // 0x1041c0: 0x0  nop
    ctx->pc = 0x1041c0u;
    // NOP
    // 0x1041c4: 0x0  nop
    ctx->pc = 0x1041c4u;
    // NOP
    ctx->pc = 0x1041c8u;
}
