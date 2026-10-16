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

// Function: sub_001B1058
// Address: 0x1b1058 - 0x1b1270
void sub_001B1058_0x1b1058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1058_0x1b1058");
#endif

    switch (ctx->pc) {
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1074u: goto label_1b1074;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b107cu: goto label_1b107c;
        case 0x1b1080u: goto label_1b1080;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1088u: goto label_1b1088;
        case 0x1b108cu: goto label_1b108c;
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1094u: goto label_1b1094;
        case 0x1b1098u: goto label_1b1098;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10a4u: goto label_1b10a4;
        case 0x1b10a8u: goto label_1b10a8;
        case 0x1b10acu: goto label_1b10ac;
        case 0x1b10b0u: goto label_1b10b0;
        case 0x1b10b4u: goto label_1b10b4;
        case 0x1b10b8u: goto label_1b10b8;
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10d4u: goto label_1b10d4;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10dcu: goto label_1b10dc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10e8u: goto label_1b10e8;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b10f4u: goto label_1b10f4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1100u: goto label_1b1100;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b1108u: goto label_1b1108;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b1118u: goto label_1b1118;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1124u: goto label_1b1124;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b112cu: goto label_1b112c;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b1138u: goto label_1b1138;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1140u: goto label_1b1140;
        case 0x1b1144u: goto label_1b1144;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b114cu: goto label_1b114c;
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1154u: goto label_1b1154;
        case 0x1b1158u: goto label_1b1158;
        case 0x1b115cu: goto label_1b115c;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1168u: goto label_1b1168;
        case 0x1b116cu: goto label_1b116c;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1174u: goto label_1b1174;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1184u: goto label_1b1184;
        case 0x1b1188u: goto label_1b1188;
        case 0x1b118cu: goto label_1b118c;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b1198u: goto label_1b1198;
        case 0x1b119cu: goto label_1b119c;
        case 0x1b11a0u: goto label_1b11a0;
        case 0x1b11a4u: goto label_1b11a4;
        case 0x1b11a8u: goto label_1b11a8;
        case 0x1b11acu: goto label_1b11ac;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11b4u: goto label_1b11b4;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11bcu: goto label_1b11bc;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b11c4u: goto label_1b11c4;
        case 0x1b11c8u: goto label_1b11c8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d0u: goto label_1b11d0;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b11dcu: goto label_1b11dc;
        case 0x1b11e0u: goto label_1b11e0;
        case 0x1b11e4u: goto label_1b11e4;
        case 0x1b11e8u: goto label_1b11e8;
        case 0x1b11ecu: goto label_1b11ec;
        case 0x1b11f0u: goto label_1b11f0;
        case 0x1b11f4u: goto label_1b11f4;
        case 0x1b11f8u: goto label_1b11f8;
        case 0x1b11fcu: goto label_1b11fc;
        case 0x1b1200u: goto label_1b1200;
        case 0x1b1204u: goto label_1b1204;
        case 0x1b1208u: goto label_1b1208;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1218u: goto label_1b1218;
        case 0x1b121cu: goto label_1b121c;
        case 0x1b1220u: goto label_1b1220;
        case 0x1b1224u: goto label_1b1224;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1234u: goto label_1b1234;
        case 0x1b1238u: goto label_1b1238;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1240u: goto label_1b1240;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b124cu: goto label_1b124c;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1254u: goto label_1b1254;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b125cu: goto label_1b125c;
        case 0x1b1260u: goto label_1b1260;
        case 0x1b1264u: goto label_1b1264;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b126cu: goto label_1b126c;
        default: break;
    }

    ctx->pc = 0x1b1058u;

label_1b1058:
    // 0x1b1058: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b105c:
    // 0x1b105c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1b1060:
    // 0x1b1060: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b1064:
    // 0x1b1064: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1b1064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1b1068:
    // 0x1b1068: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1b106c:
    // 0x1b106c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b106cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1070:
    // 0x1b1070: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b1070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1b1074:
    // 0x1b1074: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1b1078:
    // 0x1b1078: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1b1078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1b107c:
    // 0x1b107c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b107cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1080:
    // 0x1b1080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1084:
    // 0x1b1084: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b1084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1088:
    // 0x1b1088: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b1088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b108c:
    // 0x1b108c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b108cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1b1090:
    // 0x1b1090: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b1094:
    // 0x1b1094: 0x40f809  jalr        $v0
label_1b1098:
    if (ctx->pc == 0x1B1098u) {
        ctx->pc = 0x1B1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1094u;
        // 0x1b1098: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B109Cu;
        goto label_1b109c;
    }
    ctx->pc = 0x1B1094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B109Cu);
        ctx->pc = 0x1B1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1094u;
        // 0x1b1098: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1094u, 0x1B109Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B109Cu;
label_1b109c:
    // 0x1b109c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10a0:
    // 0x1b10a0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1b10a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1b10a4:
    // 0x1b10a4: 0x40f809  jalr        $v0
label_1b10a8:
    if (ctx->pc == 0x1B10A8u) {
        ctx->pc = 0x1B10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10A4u;
        // 0x1b10a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10ACu;
        goto label_1b10ac;
    }
    ctx->pc = 0x1B10A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10ACu);
        ctx->pc = 0x1B10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10A4u;
        // 0x1b10a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10A4u, 0x1B10ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10ACu;
label_1b10ac:
    // 0x1b10ac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10b0:
    // 0x1b10b0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1b10b4:
    // 0x1b10b4: 0x40f809  jalr        $v0
label_1b10b8:
    if (ctx->pc == 0x1B10B8u) {
        ctx->pc = 0x1B10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10B4u;
        // 0x1b10b8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10BCu;
        goto label_1b10bc;
    }
    ctx->pc = 0x1B10B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10BCu);
        ctx->pc = 0x1B10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10B4u;
        // 0x1b10b8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10B4u, 0x1B10BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10BCu;
label_1b10bc:
    // 0x1b10bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10c0:
    // 0x1b10c0: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x1b10c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_1b10c4:
    // 0x1b10c4: 0x40f809  jalr        $v0
label_1b10c8:
    if (ctx->pc == 0x1B10C8u) {
        ctx->pc = 0x1B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C4u;
        // 0x1b10c8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10CCu;
        goto label_1b10cc;
    }
    ctx->pc = 0x1B10C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10CCu);
        ctx->pc = 0x1B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C4u;
        // 0x1b10c8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10C4u, 0x1B10CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10CCu;
label_1b10cc:
    // 0x1b10cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10d0:
    // 0x1b10d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b10d4:
    // 0x1b10d4: 0x40f809  jalr        $v0
label_1b10d8:
    if (ctx->pc == 0x1B10D8u) {
        ctx->pc = 0x1B10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D4u;
        // 0x1b10d8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10DCu;
        goto label_1b10dc;
    }
    ctx->pc = 0x1B10D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10DCu);
        ctx->pc = 0x1B10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D4u;
        // 0x1b10d8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10D4u, 0x1B10DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10DCu;
label_1b10dc:
    // 0x1b10dc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10e0:
    // 0x1b10e0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1b10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1b10e4:
    // 0x1b10e4: 0x40f809  jalr        $v0
label_1b10e8:
    if (ctx->pc == 0x1B10E8u) {
        ctx->pc = 0x1B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E4u;
        // 0x1b10e8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10ECu;
        goto label_1b10ec;
    }
    ctx->pc = 0x1B10E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10ECu);
        ctx->pc = 0x1B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E4u;
        // 0x1b10e8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10E4u, 0x1B10ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10ECu;
label_1b10ec:
    // 0x1b10ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b10f0:
    // 0x1b10f0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1b10f4:
    // 0x1b10f4: 0x40f809  jalr        $v0
label_1b10f8:
    if (ctx->pc == 0x1B10F8u) {
        ctx->pc = 0x1B10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10F4u;
        // 0x1b10f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10FCu;
        goto label_1b10fc;
    }
    ctx->pc = 0x1B10F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B10FCu);
        ctx->pc = 0x1B10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10F4u;
        // 0x1b10f8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10F4u, 0x1B10FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10FCu;
label_1b10fc:
    // 0x1b10fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1100:
    // 0x1b1100: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b1104:
    // 0x1b1104: 0x40f809  jalr        $v0
label_1b1108:
    if (ctx->pc == 0x1B1108u) {
        ctx->pc = 0x1B1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1104u;
        // 0x1b1108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B110Cu;
        goto label_1b110c;
    }
    ctx->pc = 0x1B1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B110Cu);
        ctx->pc = 0x1B1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1104u;
        // 0x1b1108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1104u, 0x1B110Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B110Cu;
label_1b110c:
    // 0x1b110c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1110:
    // 0x1b1110: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b1110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b1114:
    // 0x1b1114: 0x40f809  jalr        $v0
label_1b1118:
    if (ctx->pc == 0x1B1118u) {
        ctx->pc = 0x1B1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1114u;
        // 0x1b1118: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B111Cu;
        goto label_1b111c;
    }
    ctx->pc = 0x1B1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B111Cu);
        ctx->pc = 0x1B1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1114u;
        // 0x1b1118: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1114u, 0x1B111Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1120:
    // 0x1b1120: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b1124:
    // 0x1b1124: 0x40f809  jalr        $v0
label_1b1128:
    if (ctx->pc == 0x1B1128u) {
        ctx->pc = 0x1B1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1124u;
        // 0x1b1128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B112Cu;
        goto label_1b112c;
    }
    ctx->pc = 0x1B1124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B112Cu);
        ctx->pc = 0x1B1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1124u;
        // 0x1b1128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1124u, 0x1B112Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B112Cu;
label_1b112c:
    // 0x1b112c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1130:
    // 0x1b1130: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b1134:
    // 0x1b1134: 0x40f809  jalr        $v0
label_1b1138:
    if (ctx->pc == 0x1B1138u) {
        ctx->pc = 0x1B1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1134u;
        // 0x1b1138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B113Cu;
        goto label_1b113c;
    }
    ctx->pc = 0x1B1134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B113Cu);
        ctx->pc = 0x1B1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1134u;
        // 0x1b1138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1134u, 0x1B113Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B113Cu;
label_1b113c:
    // 0x1b113c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1140:
    // 0x1b1140: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b1144:
    // 0x1b1144: 0x40f809  jalr        $v0
label_1b1148:
    if (ctx->pc == 0x1B1148u) {
        ctx->pc = 0x1B1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1144u;
        // 0x1b1148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B114Cu;
        goto label_1b114c;
    }
    ctx->pc = 0x1B1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B114Cu);
        ctx->pc = 0x1B1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1144u;
        // 0x1b1148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1144u, 0x1B114Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B114Cu;
label_1b114c:
    // 0x1b114c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1150:
    // 0x1b1150: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b1154:
    // 0x1b1154: 0x40f809  jalr        $v0
label_1b1158:
    if (ctx->pc == 0x1B1158u) {
        ctx->pc = 0x1B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1154u;
        // 0x1b1158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B115Cu;
        goto label_1b115c;
    }
    ctx->pc = 0x1B1154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B115Cu);
        ctx->pc = 0x1B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1154u;
        // 0x1b1158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1154u, 0x1B115Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B115Cu;
label_1b115c:
    // 0x1b115c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1160:
    // 0x1b1160: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b1164:
    // 0x1b1164: 0x40f809  jalr        $v0
label_1b1168:
    if (ctx->pc == 0x1B1168u) {
        ctx->pc = 0x1B1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1164u;
        // 0x1b1168: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B116Cu;
        goto label_1b116c;
    }
    ctx->pc = 0x1B1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B116Cu);
        ctx->pc = 0x1B1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1164u;
        // 0x1b1168: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1164u, 0x1B116Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B116Cu;
label_1b116c:
    // 0x1b116c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1170:
    // 0x1b1170: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b1174:
    // 0x1b1174: 0x40f809  jalr        $v0
label_1b1178:
    if (ctx->pc == 0x1B1178u) {
        ctx->pc = 0x1B1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1174u;
        // 0x1b1178: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B117Cu;
        goto label_1b117c;
    }
    ctx->pc = 0x1B1174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B117Cu);
        ctx->pc = 0x1B1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1174u;
        // 0x1b1178: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1174u, 0x1B117Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B117Cu;
label_1b117c:
    // 0x1b117c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1180:
    // 0x1b1180: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b1184:
    // 0x1b1184: 0x40f809  jalr        $v0
label_1b1188:
    if (ctx->pc == 0x1B1188u) {
        ctx->pc = 0x1B1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1184u;
        // 0x1b1188: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B118Cu;
        goto label_1b118c;
    }
    ctx->pc = 0x1B1184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B118Cu);
        ctx->pc = 0x1B1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1184u;
        // 0x1b1188: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1184u, 0x1B118Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B118Cu;
label_1b118c:
    // 0x1b118c: 0x8e260158  lw          $a2, 0x158($s1)
    ctx->pc = 0x1b118cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_1b1190:
    // 0x1b1190: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
label_1b1194:
    if (ctx->pc == 0x1B1194u) {
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x8e220228  lw          $v0, 0x228($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1198u;
        goto label_1b1198;
    }
    ctx->pc = 0x1B1190u;
    {
        const bool branch_taken_0x1b1190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1190) {
            ctx->pc = 0x1B1194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1190u;
            // 0x1b1194: 0x8e220228  lw          $v0, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B11C8u;
            goto label_1b11c8;
        }
    }
    ctx->pc = 0x1B1198u;
label_1b1198:
    // 0x1b1198: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1b119c:
    // 0x1b119c: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_1b11a0:
    // 0x1b11a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b11a4:
    if (ctx->pc == 0x1B11A4u) {
        ctx->pc = 0x1B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A0u;
        // 0x1b11a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11A8u;
        goto label_1b11a8;
    }
    ctx->pc = 0x1B11A0u;
    {
        const bool branch_taken_0x1b11a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A0u;
        // 0x1b11a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11a0) {
            ctx->pc = 0x1B11C4u;
            goto label_1b11c4;
        }
    }
    ctx->pc = 0x1B11A8u;
label_1b11a8:
    // 0x1b11a8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b11ac:
    // 0x1b11ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1b11b0:
    // 0x1b11b0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b11b4:
    // 0x1b11b4: 0x60f809  jalr        $v1
label_1b11b8:
    if (ctx->pc == 0x1B11B8u) {
        ctx->pc = 0x1B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11B4u;
        // 0x1b11b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11BCu;
        goto label_1b11bc;
    }
    ctx->pc = 0x1B11B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B11BCu);
        ctx->pc = 0x1B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11B4u;
        // 0x1b11b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B11B4u, 0x1B11BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B11BCu;
label_1b11bc:
    // 0x1b11bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b11c0:
    if (ctx->pc == 0x1B11C0u) {
        ctx->pc = 0x1B11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11BCu;
        // 0x1b11c0: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11C4u;
        goto label_1b11c4;
    }
    ctx->pc = 0x1B11BCu;
    {
        const bool branch_taken_0x1b11bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11BCu;
        // 0x1b11c0: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11bc) {
            ctx->pc = 0x1B11DCu;
            goto label_1b11dc;
        }
    }
    ctx->pc = 0x1B11C4u;
label_1b11c4:
    // 0x1b11c4: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_1b11c8:
    // 0x1b11c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b11cc:
    if (ctx->pc == 0x1B11CCu) {
        ctx->pc = 0x1B11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C8u;
        // 0x1b11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11D0u;
        goto label_1b11d0;
    }
    ctx->pc = 0x1B11C8u;
    {
        const bool branch_taken_0x1b11c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C8u;
        // 0x1b11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11c8) {
            ctx->pc = 0x1B11D8u;
            goto label_1b11d8;
        }
    }
    ctx->pc = 0x1B11D0u;
label_1b11d0:
    // 0x1b11d0: 0xc06cab2  jal         func_1B2AC8
label_1b11d4:
    if (ctx->pc == 0x1B11D4u) {
        ctx->pc = 0x1B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11D0u;
        // 0x1b11d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11D8u;
        goto label_1b11d8;
    }
    ctx->pc = 0x1B11D0u;
    SET_GPR_U32(ctx, 31, 0x1B11D8u);
    ctx->pc = 0x1B11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11D0u;
    // 0x1b11d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2AC8u, 0x1B11D0u, 0x1B11D8u)) {
        return;
    }
    ctx->pc = 0x1B11D8u;
label_1b11d8:
    // 0x1b11d8: 0x26700fd8  addiu       $s0, $s3, 0xFD8
    ctx->pc = 0x1b11d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
label_1b11dc:
    // 0x1b11dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b11e0:
    // 0x1b11e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b11e4:
    // 0x1b11e4: 0x40f809  jalr        $v0
label_1b11e8:
    if (ctx->pc == 0x1B11E8u) {
        ctx->pc = 0x1B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E4u;
        // 0x1b11e8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11ECu;
        goto label_1b11ec;
    }
    ctx->pc = 0x1B11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B11ECu);
        ctx->pc = 0x1B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E4u;
        // 0x1b11e8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B11E4u, 0x1B11ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B11ECu;
label_1b11ec:
    // 0x1b11ec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b11f0:
    // 0x1b11f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b11f4:
    // 0x1b11f4: 0x40f809  jalr        $v0
label_1b11f8:
    if (ctx->pc == 0x1B11F8u) {
        ctx->pc = 0x1B11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F4u;
        // 0x1b11f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11FCu;
        goto label_1b11fc;
    }
    ctx->pc = 0x1B11F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B11FCu);
        ctx->pc = 0x1B11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F4u;
        // 0x1b11f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B11F4u, 0x1B11FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B11FCu;
label_1b11fc:
    // 0x1b11fc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b11fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b1200:
    // 0x1b1200: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1204:
    // 0x1b1204: 0x40f809  jalr        $v0
label_1b1208:
    if (ctx->pc == 0x1B1208u) {
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B120Cu;
        goto label_1b120c;
    }
    ctx->pc = 0x1B1204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B120Cu);
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1204u, 0x1B120Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B120Cu;
label_1b120c:
    // 0x1b120c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1b120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1b1210:
    // 0x1b1210: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1214:
    // 0x1b1214: 0x40f809  jalr        $v0
label_1b1218:
    if (ctx->pc == 0x1B1218u) {
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B121Cu;
        goto label_1b121c;
    }
    ctx->pc = 0x1B1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B121Cu);
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1214u, 0x1B121Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B121Cu;
label_1b121c:
    // 0x1b121c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b121cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1220:
    // 0x1b1220: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1224:
    // 0x1b1224: 0x40f809  jalr        $v0
label_1b1228:
    if (ctx->pc == 0x1B1228u) {
        ctx->pc = 0x1B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1224u;
        // 0x1b1228: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B122Cu;
        goto label_1b122c;
    }
    ctx->pc = 0x1B1224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B122Cu);
        ctx->pc = 0x1B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1224u;
        // 0x1b1228: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1224u, 0x1B122Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B122Cu;
label_1b122c:
    // 0x1b122c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b1230:
    // 0x1b1230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1234:
    // 0x1b1234: 0x40f809  jalr        $v0
label_1b1238:
    if (ctx->pc == 0x1B1238u) {
        ctx->pc = 0x1B1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1234u;
        // 0x1b1238: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B123Cu;
        goto label_1b123c;
    }
    ctx->pc = 0x1B1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B123Cu);
        ctx->pc = 0x1B1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1234u;
        // 0x1b1238: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1234u, 0x1B123Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B123Cu;
label_1b123c:
    // 0x1b123c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b1240:
    // 0x1b1240: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b1244:
    // 0x1b1244: 0x40f809  jalr        $v0
label_1b1248:
    if (ctx->pc == 0x1B1248u) {
        ctx->pc = 0x1B1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1244u;
        // 0x1b1248: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B124Cu;
        goto label_1b124c;
    }
    ctx->pc = 0x1B1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B124Cu);
        ctx->pc = 0x1B1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1244u;
        // 0x1b1248: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1244u, 0x1B124Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B124Cu;
label_1b124c:
    // 0x1b124c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b124cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1250:
    // 0x1b1250: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b1250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1254:
    // 0x1b1254: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b1254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1258:
    // 0x1b1258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b125c:
    // 0x1b125c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1260:
    // 0x1b1260: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b1264:
    // 0x1b1264: 0x3e00008  jr          $ra
label_1b1268:
    if (ctx->pc == 0x1B1268u) {
        ctx->pc = 0x1B1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1264u;
        // 0x1b1268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B126Cu;
        goto label_1b126c;
    }
    ctx->pc = 0x1B1264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1264u;
        // 0x1b1268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B126Cu;
label_1b126c:
    // 0x1b126c: 0x0  nop
    ctx->pc = 0x1b126cu;
    // NOP
    ctx->pc = 0x1b1270u;
}
