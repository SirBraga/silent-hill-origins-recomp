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

// Function: sub_002F1260
// Address: 0x2f1260 - 0x2f1358
void sub_002F1260_0x2f1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1260_0x2f1260");
#endif

    switch (ctx->pc) {
        case 0x2f12a0u: goto label_2f12a0;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12e0u: goto label_2f12e0;
        case 0x2f12fcu: goto label_2f12fc;
        case 0x2f131cu: goto label_2f131c;
        case 0x2f1330u: goto label_2f1330;
        case 0x2f1338u: goto label_2f1338;
        default: break;
    }

    ctx->pc = 0x2f1260u;

    // 0x2f1260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1264: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1268: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f126c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1270: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1274: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f1274u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f127c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1280: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1284: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1284u;
    {
        const bool branch_taken_0x2f1284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1284u;
        // 0x2f1288: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1284) {
            ctx->pc = 0x2F1298u;
            goto label_2f1298;
        }
    }
    ctx->pc = 0x2F128Cu;
    // 0x2f128c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1290: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F1290u;
    {
        const bool branch_taken_0x2f1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1290u;
        // 0x2f1294: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1290) {
            ctx->pc = 0x2F133Cu;
            goto label_2f133c;
        }
    }
    ctx->pc = 0x2F1298u;
label_2f1298:
    // 0x2f1298: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F1298u;
    SET_GPR_U32(ctx, 31, 0x2F12A0u);
    ctx->pc = 0x2F129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1298u;
    // 0x2f129c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F1298u, 0x2F12A0u)) {
        return;
    }
    ctx->pc = 0x2F12A0u;
label_2f12a0:
    // 0x2f12a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f12a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12a4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F12A4u;
    {
        const bool branch_taken_0x2f12a4 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2f12a4) {
            ctx->pc = 0x2F12B8u;
            goto label_2f12b8;
        }
    }
    ctx->pc = 0x2F12ACu;
    // 0x2f12ac: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f12b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F12B0u;
    {
        const bool branch_taken_0x2f12b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12B0u;
        // 0x2f12b4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12b0) {
            ctx->pc = 0x2F133Cu;
            goto label_2f133c;
        }
    }
    ctx->pc = 0x2F12B8u;
label_2f12b8:
    // 0x2f12b8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F12B8u;
    SET_GPR_U32(ctx, 31, 0x2F12C0u);
    ctx->pc = 0x2F12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12B8u;
    // 0x2f12bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F12B8u, 0x2F12C0u)) {
        return;
    }
    ctx->pc = 0x2F12C0u;
label_2f12c0:
    // 0x2f12c0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f12c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f12c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F12C4u;
    {
        const bool branch_taken_0x2f12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12C4u;
        // 0x2f12c8: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12c4) {
            ctx->pc = 0x2F12D8u;
            goto label_2f12d8;
        }
    }
    ctx->pc = 0x2F12CCu;
    // 0x2f12cc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f12d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F12D0u;
    {
        const bool branch_taken_0x2f12d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D0u;
        // 0x2f12d4: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12d0) {
            ctx->pc = 0x2F133Cu;
            goto label_2f133c;
        }
    }
    ctx->pc = 0x2F12D8u;
label_2f12d8:
    // 0x2f12d8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F12D8u;
    SET_GPR_U32(ctx, 31, 0x2F12E0u);
    ctx->pc = 0x2F12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12D8u;
    // 0x2f12dc: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F12D8u, 0x2F12E0u)) {
        return;
    }
    ctx->pc = 0x2F12E0u;
label_2f12e0:
    // 0x2f12e0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f12e4: 0x2471f100  addiu       $s1, $v1, -0xF00
    ctx->pc = 0x2f12e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f12e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f12ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F12ECu;
    {
        const bool branch_taken_0x2f12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f12ec) {
            ctx->pc = 0x2F12F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F12ECu;
            // 0x2f12f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1308u;
            goto label_2f1308;
        }
    }
    ctx->pc = 0x2F12F4u;
    // 0x2f12f4: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F12F4u;
    SET_GPR_U32(ctx, 31, 0x2F12FCu);
    ctx->pc = 0x2F12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12F4u;
    // 0x2f12f8: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F12F4u, 0x2F12FCu)) {
        return;
    }
    ctx->pc = 0x2F12FCu;
label_2f12fc:
    // 0x2f12fc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1300: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F1300u;
    {
        const bool branch_taken_0x2f1300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1300u;
        // 0x2f1304: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1300) {
            ctx->pc = 0x2F133Cu;
            goto label_2f133c;
        }
    }
    ctx->pc = 0x2F1308u;
label_2f1308:
    // 0x2f1308: 0xac70f100  sw          $s0, -0xF00($v1)
    ctx->pc = 0x2f1308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 16));
    // 0x2f130c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f1310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1314: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1314u;
    SET_GPR_U32(ctx, 31, 0x2F131Cu);
    ctx->pc = 0x2F1318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1314u;
    // 0x2f1318: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1314u, 0x2F131Cu)) {
        return;
    }
    ctx->pc = 0x2F131Cu;
label_2f131c:
    // 0x2f131c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f131cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1320: 0x34028417  ori         $v0, $zero, 0x8417
    ctx->pc = 0x2f1320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33815);
    // 0x2f1324: 0x8c64f624  lw          $a0, -0x9DC($v1)
    ctx->pc = 0x2f1324u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F624u));
    // 0x2f1328: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1328u;
    SET_GPR_U32(ctx, 31, 0x2F1330u);
    ctx->pc = 0x2F132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1328u;
    // 0x2f132c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1328u, 0x2F1330u)) {
        return;
    }
    ctx->pc = 0x2F1330u;
label_2f1330:
    // 0x2f1330: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1330u;
    SET_GPR_U32(ctx, 31, 0x2F1338u);
    ctx->pc = 0x2F1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1330u;
    // 0x2f1334: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1330u, 0x2F1338u)) {
        return;
    }
    ctx->pc = 0x2F1338u;
label_2f1338:
    // 0x2f1338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f133c:
    // 0x2f133c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1340: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1344: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1348: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f134c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f134cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1350: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1350u;
        // 0x2f1354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1358u;
}
