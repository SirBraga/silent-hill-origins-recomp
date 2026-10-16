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

// Function: sub_0013D740
// Address: 0x13d740 - 0x13d7c0
void sub_0013D740_0x13d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D740_0x13d740");
#endif

    switch (ctx->pc) {
        case 0x13d768u: goto label_13d768;
        case 0x13d78cu: goto label_13d78c;
        case 0x13d7a4u: goto label_13d7a4;
        default: break;
    }

    ctx->pc = 0x13d740u;

    // 0x13d740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d744: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13d748: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d74c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13D74Cu;
    {
        const bool branch_taken_0x13d74c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D74Cu;
        // 0x13d750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d74c) {
            ctx->pc = 0x13D7A4u;
            goto label_13d7a4;
        }
    }
    ctx->pc = 0x13D754u;
    // 0x13d754: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13D754u;
    {
        const bool branch_taken_0x13d754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D754u;
        // 0x13d758: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d754) {
            ctx->pc = 0x13D794u;
            goto label_13d794;
        }
    }
    ctx->pc = 0x13D75Cu;
    // 0x13d75c: 0x2610fc38  addiu       $s0, $s0, -0x3C8
    ctx->pc = 0x13d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966328));
    // 0x13d760: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13D760u;
    SET_GPR_U32(ctx, 31, 0x13D768u);
    ctx->pc = 0x13D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D760u;
    // 0x13d764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13D760u, 0x13D768u)) {
        return;
    }
    ctx->pc = 0x13D768u;
label_13d768:
    // 0x13d768: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13d76c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13d770: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13d774: 0xac6247d0  sw          $v0, 0x47D0($v1)
    ctx->pc = 0x13d774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47D0u, _value); } while (0);
    // 0x13d778: 0x248447d8  addiu       $a0, $a0, 0x47D8
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18392));
    // 0x13d77c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d780: 0x24c6d7c0  addiu       $a2, $a2, -0x2840
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956992));
    // 0x13d784: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13D784u;
    SET_GPR_U32(ctx, 31, 0x13D78Cu);
    ctx->pc = 0x13D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D784u;
    // 0x13d788: 0x240700dc  addiu       $a3, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13D784u, 0x13D78Cu)) {
        return;
    }
    ctx->pc = 0x13D78Cu;
label_13d78c:
    // 0x13d78c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D78Cu;
    {
        const bool branch_taken_0x13d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D78Cu;
        // 0x13d790: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d78c) {
            ctx->pc = 0x13D7A8u;
            goto label_13d7a8;
        }
    }
    ctx->pc = 0x13D794u;
label_13d794:
    // 0x13d794: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13d794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13d798: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d79c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13D79Cu;
    SET_GPR_U32(ctx, 31, 0x13D7A4u);
    ctx->pc = 0x13D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D79Cu;
    // 0x13d7a0: 0x248447d8  addiu       $a0, $a0, 0x47D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13D79Cu, 0x13D7A4u)) {
        return;
    }
    ctx->pc = 0x13D7A4u;
label_13d7a4:
    // 0x13d7a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d7a8:
    // 0x13d7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7ACu;
        // 0x13d7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7B4u;
    // 0x13d7b4: 0x0  nop
    ctx->pc = 0x13d7b4u;
    // NOP
    // 0x13d7b8: 0x0  nop
    ctx->pc = 0x13d7b8u;
    // NOP
    // 0x13d7bc: 0x0  nop
    ctx->pc = 0x13d7bcu;
    // NOP
    ctx->pc = 0x13d7c0u;
}
