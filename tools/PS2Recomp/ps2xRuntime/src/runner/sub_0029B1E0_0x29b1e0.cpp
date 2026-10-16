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

// Function: sub_0029B1E0
// Address: 0x29b1e0 - 0x29b348
void sub_0029B1E0_0x29b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B1E0_0x29b1e0");
#endif

    switch (ctx->pc) {
        case 0x29b240u: goto label_29b240;
        case 0x29b264u: goto label_29b264;
        case 0x29b280u: goto label_29b280;
        case 0x29b298u: goto label_29b298;
        case 0x29b2e8u: goto label_29b2e8;
        case 0x29b30cu: goto label_29b30c;
        case 0x29b328u: goto label_29b328;
        default: break;
    }

    ctx->pc = 0x29b1e0u;

    // 0x29b1e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29b1e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b1ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1f4: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x29b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x29b1f8: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x29b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x29b1fc: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x29b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x29b200: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x29b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x29b204: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x29b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x29b208: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x29b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x29b20c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b210: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29b214: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B214u;
    {
        const bool branch_taken_0x29b214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B214u;
        // 0x29b218: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b214) {
            ctx->pc = 0x29B22Cu;
            goto label_29b22c;
        }
    }
    ctx->pc = 0x29B21Cu;
    // 0x29b21c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29b220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b224: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29B224u;
    {
        const bool branch_taken_0x29b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B224u;
        // 0x29b228: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b224) {
            ctx->pc = 0x29B268u;
            goto label_29b268;
        }
    }
    ctx->pc = 0x29B22Cu;
label_29b22c:
    // 0x29b22c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29b230: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B230u;
    {
        const bool branch_taken_0x29b230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b230) {
            ctx->pc = 0x29B234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B230u;
            // 0x29b234: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B248u;
            goto label_29b248;
        }
    }
    ctx->pc = 0x29B238u;
    // 0x29b238: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29B238u;
    SET_GPR_U32(ctx, 31, 0x29B240u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29B238u, 0x29B240u)) {
        return;
    }
    ctx->pc = 0x29B240u;
label_29b240:
    // 0x29b240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b244: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29b244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_29b248:
    // 0x29b248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b24c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b250: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B254u;
    {
        const bool branch_taken_0x29b254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B254u;
        // 0x29b258: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b254) {
            ctx->pc = 0x29B268u;
            goto label_29b268;
        }
    }
    ctx->pc = 0x29B25Cu;
    // 0x29b25c: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29B25Cu;
    SET_GPR_U32(ctx, 31, 0x29B264u);
    ctx->pc = 0x29B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B25Cu;
    // 0x29b260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29B25Cu, 0x29B264u)) {
        return;
    }
    ctx->pc = 0x29B264u;
label_29b264:
    // 0x29b264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b268:
    // 0x29b268: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B268u;
    {
        const bool branch_taken_0x29b268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B268u;
        // 0x29b26c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b268) {
            ctx->pc = 0x29B280u;
            goto label_29b280;
        }
    }
    ctx->pc = 0x29B270u;
    // 0x29b270: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x29b270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b274: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x29b274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29b278: 0xc0a6cd2  jal         func_29B348
    ctx->pc = 0x29B278u;
    SET_GPR_U32(ctx, 31, 0x29B280u);
    ctx->pc = 0x29B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B278u;
    // 0x29b27c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B348u, 0x29B278u, 0x29B280u)) {
        return;
    }
    ctx->pc = 0x29B280u;
label_29b280:
    // 0x29b280: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b290: 0x3e00008  jr          $ra
    ctx->pc = 0x29B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B290u;
        // 0x29b294: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B298u;
label_29b298:
    // 0x29b298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b29c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29b2a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b2a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29b2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b2ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29b2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b2b8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29b2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29b2bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B2BCu;
    {
        const bool branch_taken_0x29b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2BCu;
        // 0x29b2c0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2bc) {
            ctx->pc = 0x29B2D4u;
            goto label_29b2d4;
        }
    }
    ctx->pc = 0x29B2C4u;
    // 0x29b2c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29b2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29b2c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29B2CCu;
    {
        const bool branch_taken_0x29b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2CCu;
        // 0x29b2d0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2cc) {
            ctx->pc = 0x29B310u;
            goto label_29b310;
        }
    }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29b2d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B2D8u;
    {
        const bool branch_taken_0x29b2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b2d8) {
            ctx->pc = 0x29B2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B2D8u;
            // 0x29b2dc: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B2F0u;
            goto label_29b2f0;
        }
    }
    ctx->pc = 0x29B2E0u;
    // 0x29b2e0: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29B2E0u;
    SET_GPR_U32(ctx, 31, 0x29B2E8u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29B2E0u, 0x29B2E8u)) {
        return;
    }
    ctx->pc = 0x29B2E8u;
label_29b2e8:
    // 0x29b2e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b2ec: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29b2ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_29b2f0:
    // 0x29b2f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b2f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b2f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b2fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B2FCu;
    {
        const bool branch_taken_0x29b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2FCu;
        // 0x29b300: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2fc) {
            ctx->pc = 0x29B310u;
            goto label_29b310;
        }
    }
    ctx->pc = 0x29B304u;
    // 0x29b304: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29B304u;
    SET_GPR_U32(ctx, 31, 0x29B30Cu);
    ctx->pc = 0x29B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B304u;
    // 0x29b308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29B304u, 0x29B30Cu)) {
        return;
    }
    ctx->pc = 0x29B30Cu;
label_29b30c:
    // 0x29b30c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b310:
    // 0x29b310: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B310u;
    {
        const bool branch_taken_0x29b310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B310u;
        // 0x29b314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b310) {
            ctx->pc = 0x29B328u;
            goto label_29b328;
        }
    }
    ctx->pc = 0x29B318u;
    // 0x29b318: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b31c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29b31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b320: 0xc0a6cd2  jal         func_29B348
    ctx->pc = 0x29B320u;
    SET_GPR_U32(ctx, 31, 0x29B328u);
    ctx->pc = 0x29B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B320u;
    // 0x29b324: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B348u, 0x29B320u, 0x29B328u)) {
        return;
    }
    ctx->pc = 0x29B328u;
label_29b328:
    // 0x29b328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b32c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b330: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29b330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b334: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b33c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B33Cu;
        // 0x29b340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B344u;
    // 0x29b344: 0x0  nop
    ctx->pc = 0x29b344u;
    // NOP
    ctx->pc = 0x29b348u;
}
