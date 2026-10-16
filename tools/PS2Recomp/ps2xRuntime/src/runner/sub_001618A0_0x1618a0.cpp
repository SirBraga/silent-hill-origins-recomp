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

// Function: sub_001618A0
// Address: 0x1618a0 - 0x161948
void sub_001618A0_0x1618a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001618A0_0x1618a0");
#endif

    switch (ctx->pc) {
        case 0x1618bcu: goto label_1618bc;
        default: break;
    }

    ctx->pc = 0x1618a0u;

    // 0x1618a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1618a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1618a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1618a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1618a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1618a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1618ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1618acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1618b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1618b4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1618B4u;
    SET_GPR_U32(ctx, 31, 0x1618BCu);
    ctx->pc = 0x1618B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1618B4u;
    // 0x1618b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1618B4u, 0x1618BCu)) {
        return;
    }
    ctx->pc = 0x1618BCu;
label_1618bc:
    // 0x1618bc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1618bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1618c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1618c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1618c4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1618C4u;
    {
        const bool branch_taken_0x1618c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1618c4) {
            ctx->pc = 0x1618C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1618C4u;
            // 0x1618c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1618E8u;
            goto label_1618e8;
        }
    }
    ctx->pc = 0x1618CCu;
    // 0x1618cc: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1618d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1618D0u;
    {
        const bool branch_taken_0x1618d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1618d0) {
            ctx->pc = 0x1618D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1618D0u;
            // 0x1618d4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1618E8u;
            goto label_1618e8;
        }
    }
    ctx->pc = 0x1618D8u;
    // 0x1618d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1618d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1618dc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1618dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1618e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1618e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1618e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1618e8:
    // 0x1618e8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1618e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1618ec: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1618ECu;
    {
        const bool branch_taken_0x1618ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1618ec) {
            ctx->pc = 0x1618F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1618ECu;
            // 0x1618f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x1618F4u;
    // 0x1618f4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1618f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1618f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1618f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1618fc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1618FCu;
    {
        const bool branch_taken_0x1618fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x161900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618FCu;
        // 0x161900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618fc) {
            ctx->pc = 0x161920u;
            goto label_161920;
        }
    }
    ctx->pc = 0x161904u;
    // 0x161904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x161908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16190c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161910: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x161910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x161914: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x161914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x161918: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x16191c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161920:
    // 0x161920: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161920u;
    {
        const bool branch_taken_0x161920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161920) {
            ctx->pc = 0x161924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161920u;
            // 0x161924: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x161928u;
    // 0x161928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16192c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16192cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x161930: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_161934:
    // 0x161934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16193c: 0x3e00008  jr          $ra
    ctx->pc = 0x16193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16193Cu;
        // 0x161940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16193Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161944u;
    // 0x161944: 0x0  nop
    ctx->pc = 0x161944u;
    // NOP
    ctx->pc = 0x161948u;
}
