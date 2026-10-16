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

// Function: sub_00103250
// Address: 0x103250 - 0x103380
void sub_00103250_0x103250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103250_0x103250");
#endif

    switch (ctx->pc) {
        case 0x1032ccu: goto label_1032cc;
        default: break;
    }

    ctx->pc = 0x103250u;

    // 0x103250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103254: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x103254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x103258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x103258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10325c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x10325cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x103260: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x103260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x103264: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x103264u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x103268: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x10326c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x10326cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x103270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x103270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x103274: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x103274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10327c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10327cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103280: 0x24632f40  addiu       $v1, $v1, 0x2F40
    ctx->pc = 0x103280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12096));
    // 0x103284: 0x24c62fa0  addiu       $a2, $a2, 0x2FA0
    ctx->pc = 0x103284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12192));
    // 0x103288: 0x24e73090  addiu       $a3, $a3, 0x3090
    ctx->pc = 0x103288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12432));
    // 0x10328c: 0x250830f0  addiu       $t0, $t0, 0x30F0
    ctx->pc = 0x10328cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12528));
    // 0x103290: 0x25293208  addiu       $t1, $t1, 0x3208
    ctx->pc = 0x103290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12808));
    // 0x103294: 0x254a31b0  addiu       $t2, $t2, 0x31B0
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12720));
    // 0x103298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x103298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10329c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1032a0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1032a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1032a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1032a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032a8: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1032a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1032ac: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1032acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1032b0: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x1032b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x1032b4: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x1032b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x1032b8: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1032b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    // 0x1032bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1032bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1032c0: 0x8c908280  lw          $s0, -0x7D80($a0)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338280u));
    // 0x1032c4: 0xc040bc4  jal         func_102F10
    ctx->pc = 0x1032C4u;
    SET_GPR_U32(ctx, 31, 0x1032CCu);
    ctx->pc = 0x1032C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032C4u;
    // 0x1032c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102F10u, 0x1032C4u, 0x1032CCu)) {
        return;
    }
    ctx->pc = 0x1032CCu;
label_1032cc:
    // 0x1032cc: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1032CCu;
    {
        const bool branch_taken_0x1032cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1032cc) {
            ctx->pc = 0x1032D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1032CCu;
            // 0x1032d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10336Cu;
            goto label_10336c;
        }
    }
    ctx->pc = 0x1032D4u;
    // 0x1032d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1032d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1032d8: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1032D8u;
    {
        const bool branch_taken_0x1032d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1032d8) {
            ctx->pc = 0x1032DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1032D8u;
            // 0x1032dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10336Cu;
            goto label_10336c;
        }
    }
    ctx->pc = 0x1032E0u;
    // 0x1032e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1032e4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1032E4u;
    {
        const bool branch_taken_0x1032e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1032e4) {
            ctx->pc = 0x1032E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1032E4u;
            // 0x1032e8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1032F8u;
            goto label_1032f8;
        }
    }
    ctx->pc = 0x1032ECu;
    // 0x1032ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1032ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1032f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1032f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1032f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1032f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1032f8:
    // 0x1032f8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1032F8u;
    {
        const bool branch_taken_0x1032f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1032f8) {
            ctx->pc = 0x1032FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1032F8u;
            // 0x1032fc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10330Cu;
            goto label_10330c;
        }
    }
    ctx->pc = 0x103300u;
    // 0x103300: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x103300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x103304: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x103304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x103308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x103308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10330c:
    // 0x10330c: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10330Cu;
    {
        const bool branch_taken_0x10330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x10330c) {
            ctx->pc = 0x103310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10330Cu;
            // 0x103310: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103320u;
            goto label_103320;
        }
    }
    ctx->pc = 0x103314u;
    // 0x103314: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x103314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x103318: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x103318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10331c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_103320:
    // 0x103320: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x103320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x103324: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x103324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x103328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10332c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10332Cu;
    {
        const bool branch_taken_0x10332c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10332Cu;
        // 0x103330: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10332c) {
            ctx->pc = 0x103338u;
            goto label_103338;
        }
    }
    ctx->pc = 0x103334u;
    // 0x103334: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x103334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_103338:
    // 0x103338: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10333c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x10333cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x103340: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x103340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x103344: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x103344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x103348: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10334c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103350: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x103350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x103354: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x103354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x103358: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x103358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10335c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10335Cu;
    {
        const bool branch_taken_0x10335c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10335Cu;
        // 0x103360: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10335c) {
            ctx->pc = 0x103368u;
            goto label_103368;
        }
    }
    ctx->pc = 0x103364u;
    // 0x103364: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x103364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_103368:
    // 0x103368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x103368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10336c:
    // 0x10336c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10336cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103374: 0x3e00008  jr          $ra
    ctx->pc = 0x103374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103374u;
        // 0x103378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10337Cu;
    // 0x10337c: 0x0  nop
    ctx->pc = 0x10337cu;
    // NOP
    ctx->pc = 0x103380u;
}
