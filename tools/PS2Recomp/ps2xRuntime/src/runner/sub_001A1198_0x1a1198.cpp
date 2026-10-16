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

// Function: sub_001A1198
// Address: 0x1a1198 - 0x1a1430
void sub_001A1198_0x1a1198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1198_0x1a1198");
#endif

    switch (ctx->pc) {
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a11f0u: goto label_1a11f0;
        case 0x1a1218u: goto label_1a1218;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1268u: goto label_1a1268;
        case 0x1a1290u: goto label_1a1290;
        case 0x1a12b8u: goto label_1a12b8;
        case 0x1a12e0u: goto label_1a12e0;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a1330u: goto label_1a1330;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a13a8u: goto label_1a13a8;
        case 0x1a13c0u: goto label_1a13c0;
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1418u: goto label_1a1418;
        default: break;
    }

    ctx->pc = 0x1a1198u;

    // 0x1a1198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a119c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a11a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a11a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a11a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a11a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a11a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a11ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a11acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a11b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a11b4: 0x5840007d  blezl       $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1A11B4u;
    {
        const bool branch_taken_0x1a11b4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1a11b4) {
            ctx->pc = 0x1A11B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11B4u;
            // 0x1a11b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ACu;
            goto label_1a13ac;
        }
    }
    ctx->pc = 0x1A11BCu;
    // 0x1a11bc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A11BCu;
    {
        const bool branch_taken_0x1a11bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11BCu;
        // 0x1a11c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11bc) {
            ctx->pc = 0x1A1208u;
            goto label_1a1208;
        }
    }
    ctx->pc = 0x1A11C4u;
    // 0x1a11c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a11c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a11c8:
    // 0x1a11c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a11cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a11d0: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1a11d4: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A11D4u;
    {
        const bool branch_taken_0x1a11d4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a11d4) {
            ctx->pc = 0x1A11D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11D4u;
            // 0x1a11d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11F4u;
            goto label_1a11f4;
        }
    }
    ctx->pc = 0x1A11DCu;
    // 0x1a11dc: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a11e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A11E0u;
    {
        const bool branch_taken_0x1a11e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11e0) {
            ctx->pc = 0x1A11E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11E0u;
            // 0x1a11e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11F4u;
            goto label_1a11f4;
        }
    }
    ctx->pc = 0x1A11E8u;
    // 0x1a11e8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A11E8u;
    SET_GPR_U32(ctx, 31, 0x1A11F0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A11E8u, 0x1A11F0u)) {
        return;
    }
    ctx->pc = 0x1A11F0u;
label_1a11f0:
    // 0x1a11f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a11f4:
    // 0x1a11f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a11f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a11fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A11FCu;
    {
        const bool branch_taken_0x1a11fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11FCu;
        // 0x1a1200: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11fc) {
            ctx->pc = 0x1A11C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a11c8;
        }
    }
    ctx->pc = 0x1A1204u;
    // 0x1a1204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1208:
    // 0x1a1208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a120c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A120Cu;
    {
        const bool branch_taken_0x1a120c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A120Cu;
        // 0x1a1210: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a120c) {
            ctx->pc = 0x1A1258u;
            goto label_1a1258;
        }
    }
    ctx->pc = 0x1A1214u;
    // 0x1a1214: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1218:
    // 0x1a1218: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a121c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1220: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1a1224: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1224u;
    {
        const bool branch_taken_0x1a1224 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a1224) {
            ctx->pc = 0x1A1228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1224u;
            // 0x1a1228: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1244u;
            goto label_1a1244;
        }
    }
    ctx->pc = 0x1A122Cu;
    // 0x1a122c: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x1a122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1a1230: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1230u;
    {
        const bool branch_taken_0x1a1230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1230) {
            ctx->pc = 0x1A1234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1230u;
            // 0x1a1234: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1244u;
            goto label_1a1244;
        }
    }
    ctx->pc = 0x1A1238u;
    // 0x1a1238: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A1238u;
    SET_GPR_U32(ctx, 31, 0x1A1240u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A1238u, 0x1A1240u)) {
        return;
    }
    ctx->pc = 0x1A1240u;
label_1a1240:
    // 0x1a1240: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1244:
    // 0x1a1244: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1248: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a124c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1250: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A1250u;
    {
        const bool branch_taken_0x1a1250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1250u;
        // 0x1a1254: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1250) {
            ctx->pc = 0x1A1218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1218;
        }
    }
    ctx->pc = 0x1A1258u;
label_1a1258:
    // 0x1a1258: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1258u;
    {
        const bool branch_taken_0x1a1258 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1258u;
        // 0x1a125c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1258) {
            ctx->pc = 0x1A12A8u;
            goto label_1a12a8;
        }
    }
    ctx->pc = 0x1A1260u;
    // 0x1a1260: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1264: 0x0  nop
    ctx->pc = 0x1a1264u;
    // NOP
label_1a1268:
    // 0x1a1268: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a126c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1270: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a1274: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1274u;
    {
        const bool branch_taken_0x1a1274 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a1274) {
            ctx->pc = 0x1A1278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1274u;
            // 0x1a1278: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1294u;
            goto label_1a1294;
        }
    }
    ctx->pc = 0x1A127Cu;
    // 0x1a127c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x1a127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a1280: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1280u;
    {
        const bool branch_taken_0x1a1280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1280) {
            ctx->pc = 0x1A1284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1280u;
            // 0x1a1284: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1294u;
            goto label_1a1294;
        }
    }
    ctx->pc = 0x1A1288u;
    // 0x1a1288: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A1288u;
    SET_GPR_U32(ctx, 31, 0x1A1290u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A1288u, 0x1A1290u)) {
        return;
    }
    ctx->pc = 0x1A1290u;
label_1a1290:
    // 0x1a1290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1294:
    // 0x1a1294: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a129c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a129cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a12a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A12A0u;
    {
        const bool branch_taken_0x1a12a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12A0u;
        // 0x1a12a4: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12a0) {
            ctx->pc = 0x1A1268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1268;
        }
    }
    ctx->pc = 0x1A12A8u;
label_1a12a8:
    // 0x1a12a8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A12A8u;
    {
        const bool branch_taken_0x1a12a8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12A8u;
        // 0x1a12ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12a8) {
            ctx->pc = 0x1A12F8u;
            goto label_1a12f8;
        }
    }
    ctx->pc = 0x1A12B0u;
    // 0x1a12b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a12b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12b4: 0x0  nop
    ctx->pc = 0x1a12b4u;
    // NOP
label_1a12b8:
    // 0x1a12b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a12bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a12c0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1a12c4: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A12C4u;
    {
        const bool branch_taken_0x1a12c4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a12c4) {
            ctx->pc = 0x1A12C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A12C4u;
            // 0x1a12c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A12E4u;
            goto label_1a12e4;
        }
    }
    ctx->pc = 0x1A12CCu;
    // 0x1a12cc: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x1a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a12d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A12D0u;
    {
        const bool branch_taken_0x1a12d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12d0) {
            ctx->pc = 0x1A12D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A12D0u;
            // 0x1a12d4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A12E4u;
            goto label_1a12e4;
        }
    }
    ctx->pc = 0x1A12D8u;
    // 0x1a12d8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A12D8u;
    SET_GPR_U32(ctx, 31, 0x1A12E0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A12D8u, 0x1A12E0u)) {
        return;
    }
    ctx->pc = 0x1A12E0u;
label_1a12e0:
    // 0x1a12e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a12e4:
    // 0x1a12e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a12e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a12e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a12e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a12f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A12F0u;
    {
        const bool branch_taken_0x1a12f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12F0u;
        // 0x1a12f4: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12f0) {
            ctx->pc = 0x1A12B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a12b8;
        }
    }
    ctx->pc = 0x1A12F8u;
label_1a12f8:
    // 0x1a12f8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A12F8u;
    {
        const bool branch_taken_0x1a12f8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12F8u;
        // 0x1a12fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12f8) {
            ctx->pc = 0x1A1348u;
            goto label_1a1348;
        }
    }
    ctx->pc = 0x1A1300u;
    // 0x1a1300: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1304: 0x0  nop
    ctx->pc = 0x1a1304u;
    // NOP
label_1a1308:
    // 0x1a1308: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a130c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1310: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1a1314: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1314u;
    {
        const bool branch_taken_0x1a1314 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a1314) {
            ctx->pc = 0x1A1318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1314u;
            // 0x1a1318: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1334u;
            goto label_1a1334;
        }
    }
    ctx->pc = 0x1A131Cu;
    // 0x1a131c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1a1320: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1320u;
    {
        const bool branch_taken_0x1a1320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1320) {
            ctx->pc = 0x1A1324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1320u;
            // 0x1a1324: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1334u;
            goto label_1a1334;
        }
    }
    ctx->pc = 0x1A1328u;
    // 0x1a1328: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A1328u;
    SET_GPR_U32(ctx, 31, 0x1A1330u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A1328u, 0x1A1330u)) {
        return;
    }
    ctx->pc = 0x1A1330u;
label_1a1330:
    // 0x1a1330: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1334:
    // 0x1a1334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1338: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a133c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a133cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1340: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A1340u;
    {
        const bool branch_taken_0x1a1340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1340u;
        // 0x1a1344: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1340) {
            ctx->pc = 0x1A1308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1308;
        }
    }
    ctx->pc = 0x1A1348u;
label_1a1348:
    // 0x1a1348: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1348u;
    {
        const bool branch_taken_0x1a1348 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1348u;
        // 0x1a134c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1348) {
            ctx->pc = 0x1A1394u;
            goto label_1a1394;
        }
    }
    ctx->pc = 0x1A1350u;
    // 0x1a1350: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1354: 0x0  nop
    ctx->pc = 0x1a1354u;
    // NOP
label_1a1358:
    // 0x1a1358: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a135c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1360: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1a1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1a1364: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1364u;
    {
        const bool branch_taken_0x1a1364 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a1364) {
            ctx->pc = 0x1A1368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1364u;
            // 0x1a1368: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1384u;
            goto label_1a1384;
        }
    }
    ctx->pc = 0x1A136Cu;
    // 0x1a136c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x1a136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1a1370: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1370u;
    {
        const bool branch_taken_0x1a1370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1370) {
            ctx->pc = 0x1A1374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1370u;
            // 0x1a1374: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1384u;
            goto label_1a1384;
        }
    }
    ctx->pc = 0x1A1378u;
    // 0x1a1378: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A1378u;
    SET_GPR_U32(ctx, 31, 0x1A1380u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A1378u, 0x1A1380u)) {
        return;
    }
    ctx->pc = 0x1A1380u;
label_1a1380:
    // 0x1a1380: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1384:
    // 0x1a1384: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1388: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a1388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a138c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A138Cu;
    {
        const bool branch_taken_0x1a138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A138Cu;
        // 0x1a1390: 0x26520098  addiu       $s2, $s2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a138c) {
            ctx->pc = 0x1A1358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1358;
        }
    }
    ctx->pc = 0x1A1394u;
label_1a1394:
    // 0x1a1394: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a1394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1398: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1398u;
    {
        const bool branch_taken_0x1a1398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1398) {
            ctx->pc = 0x1A139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1398u;
            // 0x1a139c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ACu;
            goto label_1a13ac;
        }
    }
    ctx->pc = 0x1A13A0u;
    // 0x1a13a0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A13A0u;
    SET_GPR_U32(ctx, 31, 0x1A13A8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A13A0u, 0x1A13A8u)) {
        return;
    }
    ctx->pc = 0x1A13A8u;
label_1a13a8:
    // 0x1a13a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a13ac:
    // 0x1a13ac: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A13ACu;
    {
        const bool branch_taken_0x1a13ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1a13ac) {
            ctx->pc = 0x1A1410u;
            goto label_1a1410;
        }
    }
    ctx->pc = 0x1A13B4u;
    // 0x1a13b4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A13B4u;
    {
        const bool branch_taken_0x1a13b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13b4) {
            ctx->pc = 0x1A13FCu;
            goto label_1a13fc;
        }
    }
    ctx->pc = 0x1A13BCu;
    // 0x1a13bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a13bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a13c0:
    // 0x1a13c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a13c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a13c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a13cc: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A13CCu;
    {
        const bool branch_taken_0x1a13cc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1a13cc) {
            ctx->pc = 0x1A13D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13CCu;
            // 0x1a13d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ECu;
            goto label_1a13ec;
        }
    }
    ctx->pc = 0x1A13D4u;
    // 0x1a13d4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a13d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A13D8u;
    {
        const bool branch_taken_0x1a13d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13d8) {
            ctx->pc = 0x1A13DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13D8u;
            // 0x1a13dc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A13ECu;
            goto label_1a13ec;
        }
    }
    ctx->pc = 0x1A13E0u;
    // 0x1a13e0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A13E0u;
    SET_GPR_U32(ctx, 31, 0x1A13E8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A13E0u, 0x1A13E8u)) {
        return;
    }
    ctx->pc = 0x1A13E8u;
label_1a13e8:
    // 0x1a13e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a13ec:
    // 0x1a13ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a13ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a13f0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a13f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A13F4u;
    {
        const bool branch_taken_0x1a13f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F4u;
        // 0x1a13f8: 0x2652003c  addiu       $s2, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13f4) {
            ctx->pc = 0x1A13C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a13c0;
        }
    }
    ctx->pc = 0x1A13FCu;
label_1a13fc:
    // 0x1a13fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1400u;
    {
        const bool branch_taken_0x1a1400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1400) {
            ctx->pc = 0x1A1410u;
            goto label_1a1410;
        }
    }
    ctx->pc = 0x1A1408u;
    // 0x1a1408: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A1408u;
    SET_GPR_U32(ctx, 31, 0x1A1410u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A1408u, 0x1A1410u)) {
        return;
    }
    ctx->pc = 0x1A1410u;
label_1a1410:
    // 0x1a1410: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A1410u;
    SET_GPR_U32(ctx, 31, 0x1A1418u);
    ctx->pc = 0x1A1414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1410u;
    // 0x1a1414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A1410u, 0x1A1418u)) {
        return;
    }
    ctx->pc = 0x1A1418u;
label_1a1418:
    // 0x1a1418: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a1418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a141c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a141cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1420: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a1420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1428: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1428u;
        // 0x1a142c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1430u;
}
