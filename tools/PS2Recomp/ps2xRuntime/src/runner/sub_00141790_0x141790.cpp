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

// Function: sub_00141790
// Address: 0x141790 - 0x141818
void sub_00141790_0x141790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141790_0x141790");
#endif

    switch (ctx->pc) {
        case 0x1417c4u: goto label_1417c4;
        default: break;
    }

    ctx->pc = 0x141790u;

    // 0x141790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141794: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x141798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x141798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14179c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1417a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1417a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1417a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1417a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417a8: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1417ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1417acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1417b0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1417B0u;
    {
        const bool branch_taken_0x1417b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1417B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417B0u;
        // 0x1417b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417b0) {
            ctx->pc = 0x1417C4u;
            goto label_1417c4;
        }
    }
    ctx->pc = 0x1417B8u;
    // 0x1417b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1417bc: 0xc050606  jal         func_141818
    ctx->pc = 0x1417BCu;
    SET_GPR_U32(ctx, 31, 0x1417C4u);
    ctx->pc = 0x1417C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417BCu;
    // 0x1417c0: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x141818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141818u, 0x1417BCu, 0x1417C4u)) {
        return;
    }
    ctx->pc = 0x1417C4u;
label_1417c4:
    // 0x1417c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1417c8: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1417cc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1417CCu;
    {
        const bool branch_taken_0x1417cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1417D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417CCu;
        // 0x1417d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417cc) {
            ctx->pc = 0x141800u;
            goto label_141800;
        }
    }
    ctx->pc = 0x1417D4u;
    // 0x1417d4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1417d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1417d8: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1417D8u;
    {
        const bool branch_taken_0x1417d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1417d8) {
            ctx->pc = 0x1417DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1417D8u;
            // 0x1417dc: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141804u;
            goto label_141804;
        }
    }
    ctx->pc = 0x1417E0u;
    // 0x1417e0: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1417e4: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1417E4u;
    {
        const bool branch_taken_0x1417e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1417e4) {
            ctx->pc = 0x1417E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1417E4u;
            // 0x1417e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141808u;
            goto label_141808;
        }
    }
    ctx->pc = 0x1417ECu;
    // 0x1417ec: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1417ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1417f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1417F0u;
    {
        const bool branch_taken_0x1417f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417F0u;
        // 0x1417f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417f0) {
            ctx->pc = 0x141800u;
            goto label_141800;
        }
    }
    ctx->pc = 0x1417F8u;
    // 0x1417f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1417F8u;
    {
        const bool branch_taken_0x1417f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417F8u;
        // 0x1417fc: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417f8) {
            ctx->pc = 0x141804u;
            goto label_141804;
        }
    }
    ctx->pc = 0x141800u;
label_141800:
    // 0x141800: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x141800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_141804:
    // 0x141804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x141804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_141808:
    // 0x141808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14180c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141810: 0x3e00008  jr          $ra
    ctx->pc = 0x141810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141810u;
        // 0x141814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141818u;
}
