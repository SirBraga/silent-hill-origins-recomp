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

// Function: sub_002F1140
// Address: 0x2f1140 - 0x2f1260
void sub_002F1140_0x2f1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1140_0x2f1140");
#endif

    switch (ctx->pc) {
        case 0x2f1198u: goto label_2f1198;
        case 0x2f11b8u: goto label_2f11b8;
        case 0x2f11d8u: goto label_2f11d8;
        case 0x2f11f4u: goto label_2f11f4;
        case 0x2f1214u: goto label_2f1214;
        case 0x2f122cu: goto label_2f122c;
        case 0x2f1234u: goto label_2f1234;
        default: break;
    }

    ctx->pc = 0x2f1140u;

    // 0x2f1140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f1140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f1144: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f1144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1148: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f1148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f114c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f1150: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f1150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1154: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f1158: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f1158u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f115c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1160: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2f1160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1164: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1168: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f116c: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1174: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f1178: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f117c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F117Cu;
    {
        const bool branch_taken_0x2f117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F117Cu;
        // 0x2f1180: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f117c) {
            ctx->pc = 0x2F1190u;
            goto label_2f1190;
        }
    }
    ctx->pc = 0x2F1184u;
    // 0x2f1184: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f1184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1188: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F1188u;
    {
        const bool branch_taken_0x2f1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1188u;
        // 0x2f118c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1188) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F1190u;
label_2f1190:
    // 0x2f1190: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F1190u;
    SET_GPR_U32(ctx, 31, 0x2F1198u);
    ctx->pc = 0x2F1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1190u;
    // 0x2f1194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F1190u, 0x2F1198u)) {
        return;
    }
    ctx->pc = 0x2F1198u;
label_2f1198:
    // 0x2f1198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f1198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f119c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F119Cu;
    {
        const bool branch_taken_0x2f119c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2f119c) {
            ctx->pc = 0x2F11B0u;
            goto label_2f11b0;
        }
    }
    ctx->pc = 0x2F11A4u;
    // 0x2f11a4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f11a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F11A8u;
    {
        const bool branch_taken_0x2f11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11A8u;
        // 0x2f11ac: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11a8) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F11B0u;
label_2f11b0:
    // 0x2f11b0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F11B0u;
    SET_GPR_U32(ctx, 31, 0x2F11B8u);
    ctx->pc = 0x2F11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11B0u;
    // 0x2f11b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F11B0u, 0x2F11B8u)) {
        return;
    }
    ctx->pc = 0x2F11B8u;
label_2f11b8:
    // 0x2f11b8: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f11b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f11bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F11BCu;
    {
        const bool branch_taken_0x2f11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11BCu;
        // 0x2f11c0: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11bc) {
            ctx->pc = 0x2F11D0u;
            goto label_2f11d0;
        }
    }
    ctx->pc = 0x2F11C4u;
    // 0x2f11c4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f11c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F11C8u;
    {
        const bool branch_taken_0x2f11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C8u;
        // 0x2f11cc: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11c8) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F11D0u;
label_2f11d0:
    // 0x2f11d0: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F11D0u;
    SET_GPR_U32(ctx, 31, 0x2F11D8u);
    ctx->pc = 0x2F11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11D0u;
    // 0x2f11d4: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F11D0u, 0x2F11D8u)) {
        return;
    }
    ctx->pc = 0x2F11D8u;
label_2f11d8:
    // 0x2f11d8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f11dc: 0x2470f100  addiu       $s0, $v1, -0xF00
    ctx->pc = 0x2f11dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f11e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f11e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F11E4u;
    {
        const bool branch_taken_0x2f11e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f11e4) {
            ctx->pc = 0x2F11E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F11E4u;
            // 0x2f11e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1200u;
            goto label_2f1200;
        }
    }
    ctx->pc = 0x2F11ECu;
    // 0x2f11ec: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F11ECu;
    SET_GPR_U32(ctx, 31, 0x2F11F4u);
    ctx->pc = 0x2F11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11ECu;
    // 0x2f11f0: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F11ECu, 0x2F11F4u)) {
        return;
    }
    ctx->pc = 0x2F11F4u;
label_2f11f4:
    // 0x2f11f4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f11f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F11F8u;
    {
        const bool branch_taken_0x2f11f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11F8u;
        // 0x2f11fc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11f8) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F1200u;
label_2f1200:
    // 0x2f1200: 0xac71f100  sw          $s1, -0xF00($v1)
    ctx->pc = 0x2f1200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 17));
    // 0x2f1204: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f1204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f1208: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f120c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F120Cu;
    SET_GPR_U32(ctx, 31, 0x2F1214u);
    ctx->pc = 0x2F1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F120Cu;
    // 0x2f1210: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F120Cu, 0x2F1214u)) {
        return;
    }
    ctx->pc = 0x2F1214u;
label_2f1214:
    // 0x2f1214: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x2f1214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x2f1218: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f1218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f121c: 0x8c64f624  lw          $a0, -0x9DC($v1)
    ctx->pc = 0x2f121cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F624u));
    // 0x2f1220: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2f1220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2f1224: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1224u;
    SET_GPR_U32(ctx, 31, 0x2F122Cu);
    ctx->pc = 0x2F1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1224u;
    // 0x2f1228: 0xae160010  sw          $s6, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1224u, 0x2F122Cu)) {
        return;
    }
    ctx->pc = 0x2F122Cu;
label_2f122c:
    // 0x2f122c: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F122Cu;
    SET_GPR_U32(ctx, 31, 0x2F1234u);
    ctx->pc = 0x2F1230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F122Cu;
    // 0x2f1230: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F122Cu, 0x2F1234u)) {
        return;
    }
    ctx->pc = 0x2F1234u;
label_2f1234:
    // 0x2f1234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1238:
    // 0x2f1238: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f1238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f123c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f123cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1240: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f1240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1244: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f1244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1248: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f124c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f124cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1250: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1258: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1258u;
        // 0x2f125c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1260u;
}
