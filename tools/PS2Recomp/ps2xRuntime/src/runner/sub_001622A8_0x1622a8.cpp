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

// Function: sub_001622A8
// Address: 0x1622a8 - 0x162320
void sub_001622A8_0x1622a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001622A8_0x1622a8");
#endif

    switch (ctx->pc) {
        case 0x1622d0u: goto label_1622d0;
        case 0x1622f4u: goto label_1622f4;
        case 0x16230cu: goto label_16230c;
        default: break;
    }

    ctx->pc = 0x1622a8u;

    // 0x1622a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1622a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1622ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1622acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1622b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1622b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1622b4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1622B4u;
    {
        const bool branch_taken_0x1622b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1622B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622B4u;
        // 0x1622b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622b4) {
            ctx->pc = 0x16230Cu;
            goto label_16230c;
        }
    }
    ctx->pc = 0x1622BCu;
    // 0x1622bc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1622BCu;
    {
        const bool branch_taken_0x1622bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622BCu;
        // 0x1622c0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622bc) {
            ctx->pc = 0x1622FCu;
            goto label_1622fc;
        }
    }
    ctx->pc = 0x1622C4u;
    // 0x1622c4: 0x26103950  addiu       $s0, $s0, 0x3950
    ctx->pc = 0x1622c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14672));
    // 0x1622c8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1622C8u;
    SET_GPR_U32(ctx, 31, 0x1622D0u);
    ctx->pc = 0x1622CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1622C8u;
    // 0x1622cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1622C8u, 0x1622D0u)) {
        return;
    }
    ctx->pc = 0x1622D0u;
label_1622d0:
    // 0x1622d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1622d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1622d8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1622d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1622dc: 0xac62f5b8  sw          $v0, -0xA48($v1)
    ctx->pc = 0x1622dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF5B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF5B8u, _value); } while (0);
    // 0x1622e0: 0x2484f5c0  addiu       $a0, $a0, -0xA40
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    // 0x1622e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1622e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622e8: 0x24c62320  addiu       $a2, $a2, 0x2320
    ctx->pc = 0x1622e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8992));
    // 0x1622ec: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1622ECu;
    SET_GPR_U32(ctx, 31, 0x1622F4u);
    ctx->pc = 0x1622F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1622ECu;
    // 0x1622f0: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1622ECu, 0x1622F4u)) {
        return;
    }
    ctx->pc = 0x1622F4u;
label_1622f4:
    // 0x1622f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1622F4u;
    {
        const bool branch_taken_0x1622f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622F4u;
        // 0x1622f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622f4) {
            ctx->pc = 0x162310u;
            goto label_162310;
        }
    }
    ctx->pc = 0x1622FCu;
label_1622fc:
    // 0x1622fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1622fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x162300: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162304: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x162304u;
    SET_GPR_U32(ctx, 31, 0x16230Cu);
    ctx->pc = 0x162308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162304u;
    // 0x162308: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x162304u, 0x16230Cu)) {
        return;
    }
    ctx->pc = 0x16230Cu;
label_16230c:
    // 0x16230c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_162310:
    // 0x162310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162314: 0x3e00008  jr          $ra
    ctx->pc = 0x162314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162314u;
        // 0x162318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16231Cu;
    // 0x16231c: 0x0  nop
    ctx->pc = 0x16231cu;
    // NOP
    ctx->pc = 0x162320u;
}
