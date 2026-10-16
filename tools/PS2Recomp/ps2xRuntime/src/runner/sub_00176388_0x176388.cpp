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

// Function: sub_00176388
// Address: 0x176388 - 0x176400
void sub_00176388_0x176388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176388_0x176388");
#endif

    switch (ctx->pc) {
        case 0x1763b0u: goto label_1763b0;
        case 0x1763d4u: goto label_1763d4;
        case 0x1763ecu: goto label_1763ec;
        default: break;
    }

    ctx->pc = 0x176388u;

    // 0x176388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17638c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x176390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x176390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x176394: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x176394u;
    {
        const bool branch_taken_0x176394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x176398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176394u;
        // 0x176398: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176394) {
            ctx->pc = 0x1763ECu;
            goto label_1763ec;
        }
    }
    ctx->pc = 0x17639Cu;
    // 0x17639c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17639Cu;
    {
        const bool branch_taken_0x17639c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17639Cu;
        // 0x1763a0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17639c) {
            ctx->pc = 0x1763DCu;
            goto label_1763dc;
        }
    }
    ctx->pc = 0x1763A4u;
    // 0x1763a4: 0x261063f8  addiu       $s0, $s0, 0x63F8
    ctx->pc = 0x1763a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25592));
    // 0x1763a8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1763A8u;
    SET_GPR_U32(ctx, 31, 0x1763B0u);
    ctx->pc = 0x1763ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763A8u;
    // 0x1763ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1763A8u, 0x1763B0u)) {
        return;
    }
    ctx->pc = 0x1763B0u;
label_1763b0:
    // 0x1763b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1763b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1763b4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1763b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1763b8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1763b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1763bc: 0xac62f840  sw          $v0, -0x7C0($v1)
    ctx->pc = 0x1763bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF840u, _value); } while (0);
    // 0x1763c0: 0x2484f848  addiu       $a0, $a0, -0x7B8
    ctx->pc = 0x1763c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965320));
    // 0x1763c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1763c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763c8: 0x24c66400  addiu       $a2, $a2, 0x6400
    ctx->pc = 0x1763c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25600));
    // 0x1763cc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1763CCu;
    SET_GPR_U32(ctx, 31, 0x1763D4u);
    ctx->pc = 0x1763D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763CCu;
    // 0x1763d0: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1763CCu, 0x1763D4u)) {
        return;
    }
    ctx->pc = 0x1763D4u;
label_1763d4:
    // 0x1763d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1763D4u;
    {
        const bool branch_taken_0x1763d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763D4u;
        // 0x1763d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763d4) {
            ctx->pc = 0x1763F0u;
            goto label_1763f0;
        }
    }
    ctx->pc = 0x1763DCu;
label_1763dc:
    // 0x1763dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1763dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1763e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1763e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1763e4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1763E4u;
    SET_GPR_U32(ctx, 31, 0x1763ECu);
    ctx->pc = 0x1763E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763E4u;
    // 0x1763e8: 0x2484f848  addiu       $a0, $a0, -0x7B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1763E4u, 0x1763ECu)) {
        return;
    }
    ctx->pc = 0x1763ECu;
label_1763ec:
    // 0x1763ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1763ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1763f0:
    // 0x1763f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1763f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1763f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1763F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1763F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763F4u;
        // 0x1763f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1763F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1763FCu;
    // 0x1763fc: 0x0  nop
    ctx->pc = 0x1763fcu;
    // NOP
    ctx->pc = 0x176400u;
}
