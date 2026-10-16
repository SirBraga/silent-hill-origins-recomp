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

// Function: sub_002E1268
// Address: 0x2e1268 - 0x2e12f0
void sub_002E1268_0x2e1268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1268_0x2e1268");
#endif

    switch (ctx->pc) {
        case 0x2e1290u: goto label_2e1290;
        case 0x2e12acu: goto label_2e12ac;
        case 0x2e12d8u: goto label_2e12d8;
        default: break;
    }

    ctx->pc = 0x2e1268u;

    // 0x2e1268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e126c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e1270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e127c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2e127cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2e1280: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2e1280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e1284: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1284u;
    {
        const bool branch_taken_0x2e1284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e1284) {
            ctx->pc = 0x2E1288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1284u;
            // 0x2e1288: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12BCu;
            goto label_2e12bc;
        }
    }
    ctx->pc = 0x2E128Cu;
    // 0x2e128c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1290:
    // 0x2e1290: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e1290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1294: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2e1294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e1298: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e1298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e129c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e12a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e12a4: 0xc0b858c  jal         func_2E1630
    ctx->pc = 0x2E12A4u;
    SET_GPR_U32(ctx, 31, 0x2E12ACu);
    ctx->pc = 0x2E12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12A4u;
    // 0x2e12a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1630u, 0x2E12A4u, 0x2E12ACu)) {
        return;
    }
    ctx->pc = 0x2E12ACu;
label_2e12ac:
    // 0x2e12ac: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2e12acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e12b0: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E12B0u;
    {
        const bool branch_taken_0x2e12b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e12b0) {
            ctx->pc = 0x2E12B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E12B0u;
            // 0x2e12b4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1290;
        }
    }
    ctx->pc = 0x2E12B8u;
    // 0x2e12b8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e12bc:
    // 0x2e12bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e12bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e12c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e12c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e12c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2e12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e12cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2e12d0: 0xc0b85d6  jal         func_2E1758
    ctx->pc = 0x2E12D0u;
    SET_GPR_U32(ctx, 31, 0x2E12D8u);
    ctx->pc = 0x2E12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12D0u;
    // 0x2e12d4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1758u, 0x2E12D0u, 0x2E12D8u)) {
        return;
    }
    ctx->pc = 0x2E12D8u;
label_2e12d8:
    // 0x2e12d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e12d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e12dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e12dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e12e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e12e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e12e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E12E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12E4u;
        // 0x2e12e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E12E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E12ECu;
    // 0x2e12ec: 0x0  nop
    ctx->pc = 0x2e12ecu;
    // NOP
    ctx->pc = 0x2e12f0u;
}
