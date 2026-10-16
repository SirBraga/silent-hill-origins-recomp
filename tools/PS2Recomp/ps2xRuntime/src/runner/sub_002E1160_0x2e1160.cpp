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

// Function: sub_002E1160
// Address: 0x2e1160 - 0x2e1268
void sub_002E1160_0x2e1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1160_0x2e1160");
#endif

    switch (ctx->pc) {
        case 0x2e11a8u: goto label_2e11a8;
        case 0x2e11bcu: goto label_2e11bc;
        case 0x2e11c4u: goto label_2e11c4;
        case 0x2e1228u: goto label_2e1228;
        case 0x2e1230u: goto label_2e1230;
        default: break;
    }

    ctx->pc = 0x2e1160u;

    // 0x2e1160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e1164: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e1164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e1168: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e116c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e116cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e1174: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e1174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1178: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e1178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e117c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e117cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1180: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e1180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2e1184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e118c: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E118Cu;
    {
        const bool branch_taken_0x2e118c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E118Cu;
        // 0x2e1190: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e118c) {
            ctx->pc = 0x2E11CCu;
            goto label_2e11cc;
        }
    }
    ctx->pc = 0x2E1194u;
    // 0x2e1194: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e1198: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e1198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e119c: 0x24848108  addiu       $a0, $a0, -0x7EF8
    ctx->pc = 0x2e119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934792));
    // 0x2e11a0: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E11A0u;
    SET_GPR_U32(ctx, 31, 0x2E11A8u);
    ctx->pc = 0x2E11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11A0u;
    // 0x2e11a4: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E11A0u, 0x2E11A8u)) {
        return;
    }
    ctx->pc = 0x2E11A8u;
label_2e11a8:
    // 0x2e11a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e11a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11ac: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E11ACu;
    {
        const bool branch_taken_0x2e11ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e11ac) {
            ctx->pc = 0x2E11B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E11ACu;
            // 0x2e11b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E11D4u;
            goto label_2e11d4;
        }
    }
    ctx->pc = 0x2E11B4u;
    // 0x2e11b4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E11B4u;
    {
        const bool branch_taken_0x2e11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11B4u;
        // 0x2e11b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11b4) {
            ctx->pc = 0x2E1244u;
            goto label_2e1244;
        }
    }
    ctx->pc = 0x2E11BCu;
label_2e11bc:
    // 0x2e11bc: 0xc0b849a  jal         func_2E1268
    ctx->pc = 0x2E11BCu;
    SET_GPR_U32(ctx, 31, 0x2E11C4u);
    ctx->pc = 0x2E11C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11BCu;
    // 0x2e11c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1268u, 0x2E11BCu, 0x2E11C4u)) {
        return;
    }
    ctx->pc = 0x2E11C4u;
label_2e11c4:
    // 0x2e11c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E11C4u;
    {
        const bool branch_taken_0x2e11c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11C4u;
        // 0x2e11c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11c4) {
            ctx->pc = 0x2E1244u;
            goto label_2e1244;
        }
    }
    ctx->pc = 0x2E11CCu;
label_2e11cc:
    // 0x2e11cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e11d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2e11d4:
    // 0x2e11d4: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2e11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2e11d8: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x2e11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2e11dc: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2e11dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e11e0: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2e11e4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2e11e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2e11e8: 0x27869048  addiu       $a2, $gp, -0x6FB8
    ctx->pc = 0x2e11e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938696));
    // 0x2e11ec: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e11f0: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2e11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2e11f4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e11f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e11f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e1200: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e1200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e1204: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e1204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e1208: 0x8f839048  lw          $v1, -0x6FB8($gp)
    ctx->pc = 0x2e1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938696)));
    // 0x2e120c: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2e120cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x2e1210: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2e1210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2e1214: 0x8f829048  lw          $v0, -0x6FB8($gp)
    ctx->pc = 0x2e1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938696)));
    // 0x2e1218: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2e1218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2e121c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E121Cu;
    {
        const bool branch_taken_0x2e121c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E121Cu;
        // 0x2e1220: 0xaf849048  sw          $a0, -0x6FB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e121c) {
            ctx->pc = 0x2E1240u;
            goto label_2e1240;
        }
    }
    ctx->pc = 0x2E1224u;
    // 0x2e1224: 0x0  nop
    ctx->pc = 0x2e1224u;
    // NOP
label_2e1228:
    // 0x2e1228: 0xc0b85c0  jal         func_2E1700
    ctx->pc = 0x2E1228u;
    SET_GPR_U32(ctx, 31, 0x2E1230u);
    ctx->pc = 0x2E122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1228u;
    // 0x2e122c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1700u, 0x2E1228u, 0x2E1230u)) {
        return;
    }
    ctx->pc = 0x2E1230u;
label_2e1230:
    // 0x2e1230: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E1230u;
    {
        const bool branch_taken_0x2e1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1230u;
        // 0x2e1234: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1230) {
            ctx->pc = 0x2E11BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e11bc;
        }
    }
    ctx->pc = 0x2E1238u;
    // 0x2e1238: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E1238u;
    {
        const bool branch_taken_0x2e1238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1238u;
        // 0x2e123c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1238) {
            ctx->pc = 0x2E1228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1228;
        }
    }
    ctx->pc = 0x2E1240u;
label_2e1240:
    // 0x2e1240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e1240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1244:
    // 0x2e1244: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e1244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1248: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e1248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e124c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e124cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1250: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e1250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1254: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e1254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e125c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E125Cu;
        // 0x2e1260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1264u;
    // 0x2e1264: 0x0  nop
    ctx->pc = 0x2e1264u;
    // NOP
    ctx->pc = 0x2e1268u;
}
