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

// Function: sub_00175378
// Address: 0x175378 - 0x1753f0
void sub_00175378_0x175378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175378_0x175378");
#endif

    switch (ctx->pc) {
        case 0x1753a0u: goto label_1753a0;
        case 0x1753c4u: goto label_1753c4;
        case 0x1753dcu: goto label_1753dc;
        default: break;
    }

    ctx->pc = 0x175378u;

    // 0x175378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17537c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x175380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175384: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x175384u;
    {
        const bool branch_taken_0x175384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x175388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175384u;
        // 0x175388: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175384) {
            ctx->pc = 0x1753DCu;
            goto label_1753dc;
        }
    }
    ctx->pc = 0x17538Cu;
    // 0x17538c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17538Cu;
    {
        const bool branch_taken_0x17538c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17538Cu;
        // 0x175390: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17538c) {
            ctx->pc = 0x1753CCu;
            goto label_1753cc;
        }
    }
    ctx->pc = 0x175394u;
    // 0x175394: 0x261060e0  addiu       $s0, $s0, 0x60E0
    ctx->pc = 0x175394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24800));
    // 0x175398: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x175398u;
    SET_GPR_U32(ctx, 31, 0x1753A0u);
    ctx->pc = 0x17539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175398u;
    // 0x17539c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x175398u, 0x1753A0u)) {
        return;
    }
    ctx->pc = 0x1753A0u;
label_1753a0:
    // 0x1753a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1753a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1753a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1753a8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1753a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1753ac: 0xac62f800  sw          $v0, -0x800($v1)
    ctx->pc = 0x1753acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF800u, _value); } while (0);
    // 0x1753b0: 0x2484f808  addiu       $a0, $a0, -0x7F8
    ctx->pc = 0x1753b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965256));
    // 0x1753b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1753b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753b8: 0x24c653f0  addiu       $a2, $a2, 0x53F0
    ctx->pc = 0x1753b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21488));
    // 0x1753bc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1753BCu;
    SET_GPR_U32(ctx, 31, 0x1753C4u);
    ctx->pc = 0x1753C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753BCu;
    // 0x1753c0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1753BCu, 0x1753C4u)) {
        return;
    }
    ctx->pc = 0x1753C4u;
label_1753c4:
    // 0x1753c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1753C4u;
    {
        const bool branch_taken_0x1753c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1753C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753C4u;
        // 0x1753c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753c4) {
            ctx->pc = 0x1753E0u;
            goto label_1753e0;
        }
    }
    ctx->pc = 0x1753CCu;
label_1753cc:
    // 0x1753cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1753d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1753d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1753d4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1753D4u;
    SET_GPR_U32(ctx, 31, 0x1753DCu);
    ctx->pc = 0x1753D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753D4u;
    // 0x1753d8: 0x2484f808  addiu       $a0, $a0, -0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1753D4u, 0x1753DCu)) {
        return;
    }
    ctx->pc = 0x1753DCu;
label_1753dc:
    // 0x1753dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1753dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1753e0:
    // 0x1753e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1753E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753E4u;
        // 0x1753e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1753E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1753ECu;
    // 0x1753ec: 0x0  nop
    ctx->pc = 0x1753ecu;
    // NOP
    ctx->pc = 0x1753f0u;
}
