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

// Function: sub_001C1208
// Address: 0x1c1208 - 0x1c12b8
void sub_001C1208_0x1c1208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1208_0x1c1208");
#endif

    switch (ctx->pc) {
        case 0x1c1208u: goto label_1c1208;
        case 0x1c120cu: goto label_1c120c;
        case 0x1c1210u: goto label_1c1210;
        case 0x1c1214u: goto label_1c1214;
        case 0x1c1218u: goto label_1c1218;
        case 0x1c121cu: goto label_1c121c;
        case 0x1c1220u: goto label_1c1220;
        case 0x1c1224u: goto label_1c1224;
        case 0x1c1228u: goto label_1c1228;
        case 0x1c122cu: goto label_1c122c;
        case 0x1c1230u: goto label_1c1230;
        case 0x1c1234u: goto label_1c1234;
        case 0x1c1238u: goto label_1c1238;
        case 0x1c123cu: goto label_1c123c;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1244u: goto label_1c1244;
        case 0x1c1248u: goto label_1c1248;
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1254u: goto label_1c1254;
        case 0x1c1258u: goto label_1c1258;
        case 0x1c125cu: goto label_1c125c;
        case 0x1c1260u: goto label_1c1260;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1268u: goto label_1c1268;
        case 0x1c126cu: goto label_1c126c;
        case 0x1c1270u: goto label_1c1270;
        case 0x1c1274u: goto label_1c1274;
        case 0x1c1278u: goto label_1c1278;
        case 0x1c127cu: goto label_1c127c;
        case 0x1c1280u: goto label_1c1280;
        case 0x1c1284u: goto label_1c1284;
        case 0x1c1288u: goto label_1c1288;
        case 0x1c128cu: goto label_1c128c;
        case 0x1c1290u: goto label_1c1290;
        case 0x1c1294u: goto label_1c1294;
        case 0x1c1298u: goto label_1c1298;
        case 0x1c129cu: goto label_1c129c;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12a4u: goto label_1c12a4;
        case 0x1c12a8u: goto label_1c12a8;
        case 0x1c12acu: goto label_1c12ac;
        case 0x1c12b0u: goto label_1c12b0;
        case 0x1c12b4u: goto label_1c12b4;
        default: break;
    }

    ctx->pc = 0x1c1208u;

label_1c1208:
    // 0x1c1208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c120c:
    // 0x1c120c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c1210:
    // 0x1c1210: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c1210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c1214:
    // 0x1c1214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1218:
    // 0x1c1218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c121c:
    // 0x1c121c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c121cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1220:
    // 0x1c1220: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c1220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c1224:
    // 0x1c1224: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1c1228:
    if (ctx->pc == 0x1C1228u) {
        ctx->pc = 0x1C1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1224u;
        // 0x1c1228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C122Cu;
        goto label_1c122c;
    }
    ctx->pc = 0x1C1224u;
    {
        const bool branch_taken_0x1c1224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1224u;
        // 0x1c1228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1224) {
            ctx->pc = 0x1C1244u;
            goto label_1c1244;
        }
    }
    ctx->pc = 0x1C122Cu;
label_1c122c:
    // 0x1c122c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c1230:
    // 0x1c1230: 0xc062db2  jal         func_18B6C8
label_1c1234:
    if (ctx->pc == 0x1C1234u) {
        ctx->pc = 0x1C1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1230u;
        // 0x1c1234: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1238u;
        goto label_1c1238;
    }
    ctx->pc = 0x1C1230u;
    SET_GPR_U32(ctx, 31, 0x1C1238u);
    ctx->pc = 0x1C1234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1230u;
    // 0x1c1234: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B6C8u, 0x1C1230u, 0x1C1238u)) {
        return;
    }
    ctx->pc = 0x1C1238u;
label_1c1238:
    // 0x1c1238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c123c:
    // 0x1c123c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1c1240:
    if (ctx->pc == 0x1C1240u) {
        ctx->pc = 0x1C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C123Cu;
        // 0x1c1240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1244u;
        goto label_1c1244;
    }
    ctx->pc = 0x1C123Cu;
    {
        const bool branch_taken_0x1c123c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C123Cu;
        // 0x1c1240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c123c) {
            ctx->pc = 0x1C1298u;
            goto label_1c1298;
        }
    }
    ctx->pc = 0x1C1244u;
label_1c1244:
    // 0x1c1244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1248:
    // 0x1c1248: 0xc0704ae  jal         func_1C12B8
label_1c124c:
    if (ctx->pc == 0x1C124Cu) {
        ctx->pc = 0x1C124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1248u;
        // 0x1c124c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1250u;
        goto label_1c1250;
    }
    ctx->pc = 0x1C1248u;
    SET_GPR_U32(ctx, 31, 0x1C1250u);
    ctx->pc = 0x1C124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1248u;
    // 0x1c124c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C12B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C12B8u, 0x1C1248u, 0x1C1250u)) {
        return;
    }
    ctx->pc = 0x1C1250u;
label_1c1250:
    // 0x1c1250: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c1254:
    if (ctx->pc == 0x1C1254u) {
        ctx->pc = 0x1C1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1250u;
        // 0x1c1254: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1258u;
        goto label_1c1258;
    }
    ctx->pc = 0x1C1250u;
    {
        const bool branch_taken_0x1c1250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1250u;
        // 0x1c1254: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1250) {
            ctx->pc = 0x1C1294u;
            goto label_1c1294;
        }
    }
    ctx->pc = 0x1C1258u;
label_1c1258:
    // 0x1c1258: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c1258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1c125c:
    // 0x1c125c: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1c1260:
    // 0x1c1260: 0x247294d8  addiu       $s2, $v1, -0x6B28
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
label_1c1264:
    // 0x1c1264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1268:
    // 0x1c1268: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1c1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1c126c:
    // 0x1c126c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1270:
    // 0x1c1270: 0x40f809  jalr        $v0
label_1c1274:
    if (ctx->pc == 0x1C1274u) {
        ctx->pc = 0x1C1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1270u;
        // 0x1c1274: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1278u;
        goto label_1c1278;
    }
    ctx->pc = 0x1C1270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1278u);
        ctx->pc = 0x1C1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1270u;
        // 0x1c1274: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1270u, 0x1C1278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1278u;
label_1c1278:
    // 0x1c1278: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1c127c:
    if (ctx->pc == 0x1C127Cu) {
        ctx->pc = 0x1C127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1278u;
        // 0x1c127c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1280u;
        goto label_1c1280;
    }
    ctx->pc = 0x1C1278u;
    {
        const bool branch_taken_0x1c1278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1278) {
            ctx->pc = 0x1C127Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1278u;
            // 0x1c127c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1288u;
            goto label_1c1288;
        }
    }
    ctx->pc = 0x1C1280u;
label_1c1280:
    // 0x1c1280: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c1284:
    if (ctx->pc == 0x1C1284u) {
        ctx->pc = 0x1C1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1280u;
        // 0x1c1284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1288u;
        goto label_1c1288;
    }
    ctx->pc = 0x1C1280u;
    {
        const bool branch_taken_0x1c1280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1280u;
        // 0x1c1284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1280) {
            ctx->pc = 0x1C1298u;
            goto label_1c1298;
        }
    }
    ctx->pc = 0x1C1288u;
label_1c1288:
    // 0x1c1288: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1c1288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_1c128c:
    // 0x1c128c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c1290:
    if (ctx->pc == 0x1C1290u) {
        ctx->pc = 0x1C1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C128Cu;
        // 0x1c1290: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1294u;
        goto label_1c1294;
    }
    ctx->pc = 0x1C128Cu;
    {
        const bool branch_taken_0x1c128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C128Cu;
        // 0x1c1290: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c128c) {
            ctx->pc = 0x1C1268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1268;
        }
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c1298:
    // 0x1c1298: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c1298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c129c:
    // 0x1c129c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c129cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c12a0:
    // 0x1c12a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c12a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c12a4:
    // 0x1c12a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c12a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c12a8:
    // 0x1c12a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c12a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c12ac:
    // 0x1c12ac: 0x3e00008  jr          $ra
label_1c12b0:
    if (ctx->pc == 0x1C12B0u) {
        ctx->pc = 0x1C12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12ACu;
        // 0x1c12b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12B4u;
        goto label_1c12b4;
    }
    ctx->pc = 0x1C12ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12ACu;
        // 0x1c12b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C12B4u;
label_1c12b4:
    // 0x1c12b4: 0x0  nop
    ctx->pc = 0x1c12b4u;
    // NOP
    ctx->pc = 0x1c12b8u;
}
