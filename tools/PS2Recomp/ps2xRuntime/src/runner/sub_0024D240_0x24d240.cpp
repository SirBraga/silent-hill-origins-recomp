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

// Function: sub_0024D240
// Address: 0x24d240 - 0x24d348
void sub_0024D240_0x24d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D240_0x24d240");
#endif

    switch (ctx->pc) {
        case 0x24d2d4u: goto label_24d2d4;
        case 0x24d2e8u: goto label_24d2e8;
        case 0x24d2f4u: goto label_24d2f4;
        case 0x24d31cu: goto label_24d31c;
        case 0x24d328u: goto label_24d328;
        default: break;
    }

    ctx->pc = 0x24d240u;

    // 0x24d240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24d244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d248: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24d24c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24d250: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24d250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d254: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24d254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24d258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d25c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24d260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24d260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d268: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24D268u;
    {
        const bool branch_taken_0x24d268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D268u;
        // 0x24d26c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d268) {
            ctx->pc = 0x24D2B0u;
            goto label_24d2b0;
        }
    }
    ctx->pc = 0x24D270u;
    // 0x24d270: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x24d270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d274: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D274u;
    {
        const bool branch_taken_0x24d274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D274u;
        // 0x24d278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d274) {
            ctx->pc = 0x24D28Cu;
            goto label_24d28c;
        }
    }
    ctx->pc = 0x24D27Cu;
    // 0x24d27c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D27Cu;
    {
        const bool branch_taken_0x24d27c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D27Cu;
        // 0x24d280: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d27c) {
            ctx->pc = 0x24D2A0u;
            goto label_24d2a0;
        }
    }
    ctx->pc = 0x24D284u;
    // 0x24d284: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24D284u;
    {
        const bool branch_taken_0x24d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d284) {
            ctx->pc = 0x24D2E0u;
            goto label_24d2e0;
        }
    }
    ctx->pc = 0x24D28Cu;
label_24d28c:
    // 0x24d28c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d290: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24D290u;
    {
        const bool branch_taken_0x24d290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D290u;
        // 0x24d294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d290) {
            ctx->pc = 0x24D2C0u;
            goto label_24d2c0;
        }
    }
    ctx->pc = 0x24D298u;
    // 0x24d298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24D298u;
    {
        const bool branch_taken_0x24d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D298u;
        // 0x24d29c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d298) {
            ctx->pc = 0x24D2E0u;
            goto label_24d2e0;
        }
    }
    ctx->pc = 0x24D2A0u;
label_24d2a0:
    // 0x24d2a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24d2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D2A8u;
    {
        const bool branch_taken_0x24d2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2A8u;
        // 0x24d2ac: 0x24a535c0  addiu       $a1, $a1, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2a8) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D2B0u;
label_24d2b0:
    // 0x24d2b0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24d2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24D2B8u;
    {
        const bool branch_taken_0x24d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2B8u;
        // 0x24d2bc: 0x24a535c8  addiu       $a1, $a1, 0x35C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2b8) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D2C0u;
label_24d2c0:
    // 0x24d2c0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24d2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2c8: 0x24a535d0  addiu       $a1, $a1, 0x35D0
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13776));
label_24d2cc:
    // 0x24d2cc: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x24D2CCu;
    SET_GPR_U32(ctx, 31, 0x24D2D4u);
    ctx->pc = 0x2731A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2731A0u, 0x24D2CCu, 0x24D2D4u)) {
        return;
    }
    ctx->pc = 0x24D2D4u;
label_24d2d4:
    // 0x24d2d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24D2D4u;
    {
        const bool branch_taken_0x24d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D4u;
        // 0x24d2d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2d4) {
            ctx->pc = 0x24D2F4u;
            goto label_24d2f4;
        }
    }
    ctx->pc = 0x24D2DCu;
    // 0x24d2dc: 0x0  nop
    ctx->pc = 0x24d2dcu;
    // NOP
label_24d2e0:
    // 0x24d2e0: 0xc092848  jal         func_24A120
    ctx->pc = 0x24D2E0u;
    SET_GPR_U32(ctx, 31, 0x24D2E8u);
    ctx->pc = 0x24D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2E0u;
    // 0x24d2e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D2E0u, 0x24D2E8u)) {
        return;
    }
    ctx->pc = 0x24D2E8u;
label_24d2e8:
    // 0x24d2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2ec: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24D2ECu;
    SET_GPR_U32(ctx, 31, 0x24D2F4u);
    ctx->pc = 0x24D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2ECu;
    // 0x24d2f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D2ECu, 0x24D2F4u)) {
        return;
    }
    ctx->pc = 0x24D2F4u;
label_24d2f4:
    // 0x24d2f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D2F4u;
    {
        const bool branch_taken_0x24d2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2F4u;
        // 0x24d2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2f4) {
            ctx->pc = 0x24D308u;
            goto label_24d308;
        }
    }
    ctx->pc = 0x24D2FCu;
    // 0x24d2fc: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x24d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x24d300: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24D300u;
    {
        const bool branch_taken_0x24d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D300u;
        // 0x24d304: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d300) {
            ctx->pc = 0x24D328u;
            goto label_24d328;
        }
    }
    ctx->pc = 0x24D308u;
label_24d308:
    // 0x24d308: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24d30c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x24d30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x24d310: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24d314: 0xc092848  jal         func_24A120
    ctx->pc = 0x24D314u;
    SET_GPR_U32(ctx, 31, 0x24D31Cu);
    ctx->pc = 0x24D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D314u;
    // 0x24d318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D314u, 0x24D31Cu)) {
        return;
    }
    ctx->pc = 0x24D31Cu;
label_24d31c:
    // 0x24d31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d320: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24D320u;
    SET_GPR_U32(ctx, 31, 0x24D328u);
    ctx->pc = 0x24D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D320u;
    // 0x24d324: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D320u, 0x24D328u)) {
        return;
    }
    ctx->pc = 0x24D328u;
label_24d328:
    // 0x24d328: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24d328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d32c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24d32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d330: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24d330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d334: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24d334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d338: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24d338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d340: 0x3e00008  jr          $ra
    ctx->pc = 0x24D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D340u;
        // 0x24d344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D348u;
}
