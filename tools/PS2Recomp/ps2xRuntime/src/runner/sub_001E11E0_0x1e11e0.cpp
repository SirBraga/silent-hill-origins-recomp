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

// Function: sub_001E11E0
// Address: 0x1e11e0 - 0x1e1760
void sub_001E11E0_0x1e11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E11E0_0x1e11e0");
#endif

    switch (ctx->pc) {
        case 0x1e1240u: goto label_1e1240;
        case 0x1e1278u: goto label_1e1278;
        case 0x1e1378u: goto label_1e1378;
        case 0x1e163cu: goto label_1e163c;
        case 0x1e16a4u: goto label_1e16a4;
        default: break;
    }

    ctx->pc = 0x1e11e0u;

    // 0x1e11e0: 0x27bdef70  addiu       $sp, $sp, -0x1090
    ctx->pc = 0x1e11e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963056));
    // 0x1e11e4: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x1e11e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x1e11e8: 0xafa40fb0  sw          $a0, 0xFB0($sp)
    ctx->pc = 0x1e11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4016), GPR_U32(ctx, 4));
    // 0x1e11ec: 0x7fb01060  sq          $s0, 0x1060($sp)
    ctx->pc = 0x1e11ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 16));
    // 0x1e11f0: 0xe7b71088  swc1        $f23, 0x1088($sp)
    ctx->pc = 0x1e11f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4232), bits); }
    // 0x1e11f4: 0xafa50fb4  sw          $a1, 0xFB4($sp)
    ctx->pc = 0x1e11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4020), GPR_U32(ctx, 5));
    // 0x1e11f8: 0x7fb11050  sq          $s1, 0x1050($sp)
    ctx->pc = 0x1e11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 17));
    // 0x1e11fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e11fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1200: 0x7fb31030  sq          $s3, 0x1030($sp)
    ctx->pc = 0x1e1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 19));
    // 0x1e1204: 0x7fb41020  sq          $s4, 0x1020($sp)
    ctx->pc = 0x1e1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 20));
    // 0x1e1208: 0x7fb51010  sq          $s5, 0x1010($sp)
    ctx->pc = 0x1e1208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 21));
    // 0x1e120c: 0x7fb61000  sq          $s6, 0x1000($sp)
    ctx->pc = 0x1e120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4096), GPR_VEC(ctx, 22));
    // 0x1e1210: 0x7fb70ff0  sq          $s7, 0xFF0($sp)
    ctx->pc = 0x1e1210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4080), GPR_VEC(ctx, 23));
    // 0x1e1214: 0x7fbe0fe0  sq          $fp, 0xFE0($sp)
    ctx->pc = 0x1e1214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4064), GPR_VEC(ctx, 30));
    // 0x1e1218: 0xffbf0fd0  sd          $ra, 0xFD0($sp)
    ctx->pc = 0x1e1218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4048), GPR_U64(ctx, 31));
    // 0x1e121c: 0xe7b61080  swc1        $f22, 0x1080($sp)
    ctx->pc = 0x1e121cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4224), bits); }
    // 0x1e1220: 0xe7b51078  swc1        $f21, 0x1078($sp)
    ctx->pc = 0x1e1220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4216), bits); }
    // 0x1e1224: 0xe7b41070  swc1        $f20, 0x1070($sp)
    ctx->pc = 0x1e1224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4208), bits); }
    // 0x1e1228: 0x7fb21040  sq          $s2, 0x1040($sp)
    ctx->pc = 0x1e1228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 18));
    // 0x1e122c: 0x8fa20fb0  lw          $v0, 0xFB0($sp)
    ctx->pc = 0x1e122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4016)));
    // 0x1e1230: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e1234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1238: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1E1238u;
    SET_GPR_U32(ctx, 31, 0x1E1240u);
    ctx->pc = 0x1E123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1238u;
    // 0x1e123c: 0xc455000c  lwc1        $f21, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1E1238u, 0x1E1240u)) {
        return;
    }
    ctx->pc = 0x1E1240u;
label_1e1240:
    // 0x1e1240: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1e1240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e1244: 0xafa00fb8  sw          $zero, 0xFB8($sp)
    ctx->pc = 0x1e1244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4024), GPR_U32(ctx, 0));
    // 0x1e1248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e124c: 0x8fa30fb0  lw          $v1, 0xFB0($sp)
    ctx->pc = 0x1e124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4016)));
    // 0x1e1250: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e1254: 0x1840012e  blez        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x1E1254u;
    {
        const bool branch_taken_0x1e1254 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1254u;
        // 0x1e1258: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1254) {
            ctx->pc = 0x1E1710u;
            goto label_1e1710;
        }
    }
    ctx->pc = 0x1E125Cu;
    // 0x1e125c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1e125cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1e1260: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1e1260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1e1264: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e1264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e1268: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x1e1268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x1e126c: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x1e126cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x1e1270: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e1270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e1274: 0x8fa20fb4  lw          $v0, 0xFB4($sp)
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4020)));
label_1e1278:
    // 0x1e1278: 0x960b0000  lhu         $t3, 0x0($s0)
    ctx->pc = 0x1e1278u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e127c: 0x400013  mtlo        $v0
    ctx->pc = 0x1e127cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1e1280: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e1284: 0x70a28800  madd        $s1, $a1, $v0
    ctx->pc = 0x1e1284u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1e1288: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x1e1288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1e128c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E128Cu;
    {
        const bool branch_taken_0x1e128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E128Cu;
        // 0x1e1290: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e128c) {
            ctx->pc = 0x1E12C4u;
            goto label_1e12c4;
        }
    }
    ctx->pc = 0x1E1294u;
    // 0x1e1294: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e1294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1298: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e1298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e129c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E129Cu;
    {
        const bool branch_taken_0x1e129c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e129c) {
            ctx->pc = 0x1E12A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E129Cu;
            // 0x1e12a0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E12ACu;
            goto label_1e12ac;
        }
    }
    ctx->pc = 0x1E12A4u;
    // 0x1e12a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E12A4u;
    {
        const bool branch_taken_0x1e12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12A4u;
        // 0x1e12a8: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12a4) {
            ctx->pc = 0x1E12C0u;
            goto label_1e12c0;
        }
    }
    ctx->pc = 0x1E12ACu;
label_1e12ac:
    // 0x1e12ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e12acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e12b0: 0x0  nop
    ctx->pc = 0x1e12b0u;
    // NOP
    // 0x1e12b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e12b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e12b8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e12b8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e12bc: 0x461505c2  mul.s       $f23, $f0, $f21
    ctx->pc = 0x1e12bcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1e12c0:
    // 0x1e12c0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e12c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1e12c4:
    // 0x1e12c4: 0x31620002  andi        $v0, $t3, 0x2
    ctx->pc = 0x1e12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x1e12c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E12C8u;
    {
        const bool branch_taken_0x1e12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C8u;
        // 0x1e12cc: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12c8) {
            ctx->pc = 0x1E12DCu;
            goto label_1e12dc;
        }
    }
    ctx->pc = 0x1E12D0u;
    // 0x1e12d0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e12d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e12d4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e12d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e12d8: 0xafa30fb8  sw          $v1, 0xFB8($sp)
    ctx->pc = 0x1e12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4024), GPR_U32(ctx, 3));
label_1e12dc:
    // 0x1e12dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e12e0: 0x8fa40fb8  lw          $a0, 0xFB8($sp)
    ctx->pc = 0x1e12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4024)));
    // 0x1e12e4: 0x258e0001  addiu       $t6, $t4, 0x1
    ctx->pc = 0x1e12e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1e12e8: 0xafae0fc0  sw          $t6, 0xFC0($sp)
    ctx->pc = 0x1e12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4032), GPR_U32(ctx, 14));
    // 0x1e12ec: 0x31790004  andi        $t9, $t3, 0x4
    ctx->pc = 0x1e12ecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
    // 0x1e12f0: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e12f4: 0x31730008  andi        $s3, $t3, 0x8
    ctx->pc = 0x1e12f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
    // 0x1e12f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e12fc: 0x31740010  andi        $s4, $t3, 0x10
    ctx->pc = 0x1e12fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
    // 0x1e1300: 0x8fa20fb4  lw          $v0, 0xFB4($sp)
    ctx->pc = 0x1e1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4020)));
    // 0x1e1304: 0x31750040  andi        $s5, $t3, 0x40
    ctx->pc = 0x1e1304u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)64);
    // 0x1e1308: 0x31760080  andi        $s6, $t3, 0x80
    ctx->pc = 0x1e1308u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)128);
    // 0x1e130c: 0x31770100  andi        $s7, $t3, 0x100
    ctx->pc = 0x1e130cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)256);
    // 0x1e1310: 0x400013  mtlo        $v0
    ctx->pc = 0x1e1310u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1e1314: 0x317e0200  andi        $fp, $t3, 0x200
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)512);
    // 0x1e1318: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1e1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e131c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1e131cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e1320: 0x7062c000  madd        $t8, $v1, $v0
    ctx->pc = 0x1e1320u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1e1324: 0x27ae0004  addiu       $t6, $sp, 0x4
    ctx->pc = 0x1e1324u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e1328: 0x31630020  andi        $v1, $t3, 0x20
    ctx->pc = 0x1e1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
    // 0x1e132c: 0x31620400  andi        $v0, $t3, 0x400
    ctx->pc = 0x1e132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1024);
    // 0x1e1330: 0x316b0800  andi        $t3, $t3, 0x800
    ctx->pc = 0x1e1330u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2048);
    // 0x1e1334: 0xafa30fc8  sw          $v1, 0xFC8($sp)
    ctx->pc = 0x1e1334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4040), GPR_U32(ctx, 3));
    // 0x1e1338: 0x27af0008  addiu       $t7, $sp, 0x8
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e133c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1e133cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1e1340: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e1340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1344: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x1e1344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1e1348: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e134c: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x1e134cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e1350: 0xafa20fc4  sw          $v0, 0xFC4($sp)
    ctx->pc = 0x1e1350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4036), GPR_U32(ctx, 2));
    // 0x1e1354: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x1e1354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e1358: 0xafab0fbc  sw          $t3, 0xFBC($sp)
    ctx->pc = 0x1e1358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4028), GPR_U32(ctx, 11));
    // 0x1e135c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E135Cu;
    {
        const bool branch_taken_0x1e135c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E135Cu;
        // 0x1e1360: 0x27ad0024  addiu       $t5, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e135c) {
            ctx->pc = 0x1E1390u;
            goto label_1e1390;
        }
    }
    ctx->pc = 0x1E1364u;
    // 0x1e1364: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1368: 0x10580009  beq         $v0, $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1368u;
    {
        const bool branch_taken_0x1e1368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        ctx->pc = 0x1E136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1368u;
        // 0x1e136c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1368) {
            ctx->pc = 0x1E1390u;
            goto label_1e1390;
        }
    }
    ctx->pc = 0x1E1370u;
    // 0x1e1370: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1e1370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1374: 0x0  nop
    ctx->pc = 0x1e1374u;
    // NOP
label_1e1378:
    // 0x1e1378: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1e137c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1380: 0x0  nop
    ctx->pc = 0x1e1380u;
    // NOP
    // 0x1e1384: 0x0  nop
    ctx->pc = 0x1e1384u;
    // NOP
    // 0x1e1388: 0x1458fffb  bne         $v0, $t8, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E1388u;
    {
        const bool branch_taken_0x1e1388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x1E138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1388u;
        // 0x1e138c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1388) {
            ctx->pc = 0x1E1378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1378;
        }
    }
    ctx->pc = 0x1E1390u;
label_1e1390:
    // 0x1e1390: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1e1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e1394: 0x1825818  mult        $t3, $t4, $v0
    ctx->pc = 0x1e1394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1e1398: 0x3ab1821  addu        $v1, $sp, $t3
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
    // 0x1e139c: 0x13200005  beqz        $t9, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E139Cu;
    {
        const bool branch_taken_0x1e139c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E139Cu;
        // 0x1e13a0: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e139c) {
            ctx->pc = 0x1E13B4u;
            goto label_1e13b4;
        }
    }
    ctx->pc = 0x1E13A4u;
    // 0x1e13a4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13a8: 0x1cb1021  addu        $v0, $t6, $t3
    ctx->pc = 0x1e13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1e13ac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e13b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e13b4:
    // 0x1e13b4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13B4u;
    {
        const bool branch_taken_0x1e13b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13B4u;
        // 0x1e13b8: 0x1eb1021  addu        $v0, $t7, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13b4) {
            ctx->pc = 0x1E13C8u;
            goto label_1e13c8;
        }
    }
    ctx->pc = 0x1E13BCu;
    // 0x1e13bc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e13bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13c0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e13c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e13c8:
    // 0x1e13c8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13C8u;
    {
        const bool branch_taken_0x1e13c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13C8u;
        // 0x1e13cc: 0xab1021  addu        $v0, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13c8) {
            ctx->pc = 0x1E13DCu;
            goto label_1e13dc;
        }
    }
    ctx->pc = 0x1E13D0u;
    // 0x1e13d0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13d4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e13d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e13d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e13dc:
    // 0x1e13dc: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13DCu;
    {
        const bool branch_taken_0x1e13dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13DCu;
        // 0x1e13e0: 0xcb1021  addu        $v0, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13dc) {
            ctx->pc = 0x1E13F0u;
            goto label_1e13f0;
        }
    }
    ctx->pc = 0x1E13E4u;
    // 0x1e13e4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e13e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e13e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e13ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e13f0:
    // 0x1e13f0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13F0u;
    {
        const bool branch_taken_0x1e13f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F0u;
        // 0x1e13f4: 0xeb1021  addu        $v0, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13f0) {
            ctx->pc = 0x1E1404u;
            goto label_1e1404;
        }
    }
    ctx->pc = 0x1E13F8u;
    // 0x1e13f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e13f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e13fc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e13fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e1400: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e1404:
    // 0x1e1404: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1404u;
    {
        const bool branch_taken_0x1e1404 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1404u;
        // 0x1e1408: 0x10b1021  addu        $v0, $t0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1404) {
            ctx->pc = 0x1E1418u;
            goto label_1e1418;
        }
    }
    ctx->pc = 0x1E140Cu;
    // 0x1e140c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e140cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1410: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e1414: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e1418:
    // 0x1e1418: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1418u;
    {
        const bool branch_taken_0x1e1418 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1418u;
        // 0x1e141c: 0x12b1021  addu        $v0, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1418) {
            ctx->pc = 0x1E142Cu;
            goto label_1e142c;
        }
    }
    ctx->pc = 0x1E1420u;
    // 0x1e1420: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e1420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1424: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e1428: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e142c:
    // 0x1e142c: 0x8fa30fc4  lw          $v1, 0xFC4($sp)
    ctx->pc = 0x1e142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4036)));
    // 0x1e1430: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1430u;
    {
        const bool branch_taken_0x1e1430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1430u;
        // 0x1e1434: 0x14b1021  addu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1430) {
            ctx->pc = 0x1E1444u;
            goto label_1e1444;
        }
    }
    ctx->pc = 0x1E1438u;
    // 0x1e1438: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e1438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e143c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e143cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e1440: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e1444:
    // 0x1e1444: 0x8fa40fbc  lw          $a0, 0xFBC($sp)
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4028)));
    // 0x1e1448: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1448u;
    {
        const bool branch_taken_0x1e1448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1448u;
        // 0x1e144c: 0x1ab1021  addu        $v0, $t5, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1448) {
            ctx->pc = 0x1E145Cu;
            goto label_1e145c;
        }
    }
    ctx->pc = 0x1E1450u;
    // 0x1e1450: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e1450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1454: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e1454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e1458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e145c:
    // 0x1e145c: 0xae380000  sw          $t8, 0x0($s1)
    ctx->pc = 0x1e145cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 24));
    // 0x1e1460: 0x1cb1021  addu        $v0, $t6, $t3
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1e1464: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x1e1464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e1468: 0x1eb2021  addu        $a0, $t7, $t3
    ctx->pc = 0x1e1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1e146c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1e146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1e1470: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1e1470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1e1474: 0x6a2e000f  ldl         $t6, 0xF($s1)
    ctx->pc = 0x1e1474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x1e1478: 0x6e2e0008  ldr         $t6, 0x8($s1)
    ctx->pc = 0x1e1478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x1e147c: 0x6a2f0017  ldl         $t7, 0x17($s1)
    ctx->pc = 0x1e147cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x1e1480: 0x6e2f0010  ldr         $t7, 0x10($s1)
    ctx->pc = 0x1e1480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x1e1484: 0xb3ae0fa7  sdl         $t6, 0xFA7($sp)
    ctx->pc = 0x1e1484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4007); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1488: 0xb7ae0fa0  sdr         $t6, 0xFA0($sp)
    ctx->pc = 0x1e1488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e148c: 0xb3af0faf  sdl         $t7, 0xFAF($sp)
    ctx->pc = 0x1e148cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1490: 0xb7af0fa8  sdr         $t7, 0xFA8($sp)
    ctx->pc = 0x1e1490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4008); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1494: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1e1498: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x1e1498u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e149c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x1e149cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1e14a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e14a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e14a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1e14a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1e14a8: 0x18e1818  mult        $v1, $t4, $t6
    ctx->pc = 0x1e14a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e14ac: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1e14b0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1e14b4: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x1e14b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1e14b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e14b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e14bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e14bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e14c0: 0x0  nop
    ctx->pc = 0x1e14c0u;
    // NOP
    // 0x1e14c4: 0x0  nop
    ctx->pc = 0x1e14c4u;
    // NOP
    // 0x1e14c8: 0x461618c3  div.s       $f3, $f3, $f22
    ctx->pc = 0x1e14c8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[22]);
    // 0x1e14cc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1e14ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e14d0: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x1e14d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e14d4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e14d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e14d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e14dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e14dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e14e0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1e14e0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[22]);
    // 0x1e14e4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e14e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e14e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e14e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e14ec: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1e14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e14f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e14f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e14f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e14f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e14f8: 0x0  nop
    ctx->pc = 0x1e14f8u;
    // NOP
    // 0x1e14fc: 0x0  nop
    ctx->pc = 0x1e14fcu;
    // NOP
    // 0x1e1500: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x1e1500u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[22]);
    // 0x1e1504: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e1504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e1508: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e1508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e150c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1e150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1510: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e1510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e1514: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e1514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e1518: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e151c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1e151cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e1520: 0x0  nop
    ctx->pc = 0x1e1520u;
    // NOP
    // 0x1e1524: 0x0  nop
    ctx->pc = 0x1e1524u;
    // NOP
    // 0x1e1528: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x1e1528u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[20]);
    // 0x1e152c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1530: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1534: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x1e1534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1e1538: 0x46056034  c.lt.s      $f12, $f5
    ctx->pc = 0x1e1538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e153c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e153cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e1540: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e1540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e1544: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x1e1544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e1548: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1e1548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e154c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e154cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1550: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e1554: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1558: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e1558u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e155c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1560: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e1560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e1564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e1568: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e156c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1e1570: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1e1570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1574: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1578: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e157c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1580: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1e1580u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
    // 0x1e1584: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e1584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1588: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e1588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e158c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e158cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e1590: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e1590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e1594: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x1e1594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1e1598: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1e1598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e159c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e159cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e15a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e15a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e15a8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e15a8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e15ac: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1e15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15b0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1e15b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e15b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e15b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e15b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e15b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e15bc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1e15bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1e15c0: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1e15c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e15c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e15c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e15cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e15d0: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1e15d0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
    // 0x1e15d4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1e15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e15d8: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x1e15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e15dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e15dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e15e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e15e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e15e4: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x1e15e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1e15e8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1e15e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e15ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e15ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e15f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e15f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e15f8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1e15f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1e15fc: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1e15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1600: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1e1600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e1604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e1608: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e160c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E160Cu;
    {
        const bool branch_taken_0x1e160c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E160Cu;
        // 0x1e1610: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e160c) {
            ctx->pc = 0x1E1618u;
            goto label_1e1618;
        }
    }
    ctx->pc = 0x1E1614u;
    // 0x1e1614: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x1e1614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
label_1e1618:
    // 0x1e1618: 0x0  nop
    ctx->pc = 0x1e1618u;
    // NOP
    // 0x1e161c: 0x0  nop
    ctx->pc = 0x1e161cu;
    // NOP
    // 0x1e1620: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1e1620u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1e1624: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1e1624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1628: 0x0  nop
    ctx->pc = 0x1e1628u;
    // NOP
    // 0x1e162c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E162Cu;
    {
        const bool branch_taken_0x1e162c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e162c) {
            ctx->pc = 0x1E1630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E162Cu;
            // 0x1e1630: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1640u;
            goto label_1e1640;
        }
    }
    ctx->pc = 0x1E1634u;
    // 0x1e1634: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1E1634u;
    SET_GPR_U32(ctx, 31, 0x1E163Cu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1E1634u, 0x1E163Cu)) {
        return;
    }
    ctx->pc = 0x1E163Cu;
label_1e163c:
    // 0x1e163c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1e1640:
    // 0x1e1640: 0x8faf0fc8  lw          $t7, 0xFC8($sp)
    ctx->pc = 0x1e1640u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4040)));
    // 0x1e1644: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1644u;
    {
        const bool branch_taken_0x1e1644 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1644) {
            ctx->pc = 0x1E1648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1644u;
            // 0x1e1648: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1658u;
            goto label_1e1658;
        }
    }
    ctx->pc = 0x1E164Cu;
    // 0x1e164c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e164cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e1650: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e1654: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e1654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e1658:
    // 0x1e1658: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1e1658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e165c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e165cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e1660: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1e1660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1664: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e1664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e1668: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e166c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1e166cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1e1670: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e1670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e1674: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e1674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e1678: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e167c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e167cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1680: 0x0  nop
    ctx->pc = 0x1e1680u;
    // NOP
    // 0x1e1684: 0x0  nop
    ctx->pc = 0x1e1684u;
    // NOP
    // 0x1e1688: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1e1688u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1e168c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1e168cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1690: 0x0  nop
    ctx->pc = 0x1e1690u;
    // NOP
    // 0x1e1694: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1694u;
    {
        const bool branch_taken_0x1e1694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1694) {
            ctx->pc = 0x1E1698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1694u;
            // 0x1e1698: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16A8u;
            goto label_1e16a8;
        }
    }
    ctx->pc = 0x1E169Cu;
    // 0x1e169c: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1E169Cu;
    SET_GPR_U32(ctx, 31, 0x1E16A4u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1E169Cu, 0x1E16A4u)) {
        return;
    }
    ctx->pc = 0x1E16A4u;
label_1e16a4:
    // 0x1e16a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e16a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e16a8:
    // 0x1e16a8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e16ac: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1e16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e16b0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e16b4: 0x0  nop
    ctx->pc = 0x1e16b4u;
    // NOP
    // 0x1e16b8: 0x0  nop
    ctx->pc = 0x1e16b8u;
    // NOP
    // 0x1e16bc: 0x460c18c3  div.s       $f3, $f3, $f12
    ctx->pc = 0x1e16bcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[12]);
    // 0x1e16c0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1e16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e16c4: 0x0  nop
    ctx->pc = 0x1e16c4u;
    // NOP
    // 0x1e16c8: 0x0  nop
    ctx->pc = 0x1e16c8u;
    // NOP
    // 0x1e16cc: 0x460c1083  div.s       $f2, $f2, $f12
    ctx->pc = 0x1e16ccu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[12]);
    // 0x1e16d0: 0x0  nop
    ctx->pc = 0x1e16d0u;
    // NOP
    // 0x1e16d4: 0x0  nop
    ctx->pc = 0x1e16d4u;
    // NOP
    // 0x1e16d8: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x1e16d8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[12]);
    // 0x1e16dc: 0x8fa50fc0  lw          $a1, 0xFC0($sp)
    ctx->pc = 0x1e16dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4032)));
    // 0x1e16e0: 0x0  nop
    ctx->pc = 0x1e16e0u;
    // NOP
    // 0x1e16e4: 0x0  nop
    ctx->pc = 0x1e16e4u;
    // NOP
    // 0x1e16e8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1e16e8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x1e16ec: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x1e16ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e16f0: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1e16f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e16f4: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e16f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e16f8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e16f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e16fc: 0x8fb30fb0  lw          $s3, 0xFB0($sp)
    ctx->pc = 0x1e16fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4016)));
    // 0x1e1700: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e1704: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1e1704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e1708: 0x1440fedb  bnez        $v0, . + 4 + (-0x125 << 2)
    ctx->pc = 0x1E1708u;
    {
        const bool branch_taken_0x1e1708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1708u;
        // 0x1e170c: 0x8fa20fb4  lw          $v0, 0xFB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1708) {
            ctx->pc = 0x1E1278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1278;
        }
    }
    ctx->pc = 0x1E1710u;
label_1e1710:
    // 0x1e1710: 0x7bb01060  lq          $s0, 0x1060($sp)
    ctx->pc = 0x1e1710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x1e1714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1718: 0x7bb11050  lq          $s1, 0x1050($sp)
    ctx->pc = 0x1e1718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x1e171c: 0x7bb21040  lq          $s2, 0x1040($sp)
    ctx->pc = 0x1e171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x1e1720: 0x7bb31030  lq          $s3, 0x1030($sp)
    ctx->pc = 0x1e1720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x1e1724: 0x7bb41020  lq          $s4, 0x1020($sp)
    ctx->pc = 0x1e1724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x1e1728: 0x7bb51010  lq          $s5, 0x1010($sp)
    ctx->pc = 0x1e1728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x1e172c: 0x7bb61000  lq          $s6, 0x1000($sp)
    ctx->pc = 0x1e172cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x1e1730: 0x7bb70ff0  lq          $s7, 0xFF0($sp)
    ctx->pc = 0x1e1730u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4080)));
    // 0x1e1734: 0x7bbe0fe0  lq          $fp, 0xFE0($sp)
    ctx->pc = 0x1e1734u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4064)));
    // 0x1e1738: 0xdfbf0fd0  ld          $ra, 0xFD0($sp)
    ctx->pc = 0x1e1738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4048)));
    // 0x1e173c: 0xc7b71088  lwc1        $f23, 0x1088($sp)
    ctx->pc = 0x1e173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e1740: 0xc7b61080  lwc1        $f22, 0x1080($sp)
    ctx->pc = 0x1e1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e1744: 0xc7b51078  lwc1        $f21, 0x1078($sp)
    ctx->pc = 0x1e1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1748: 0xc7b41070  lwc1        $f20, 0x1070($sp)
    ctx->pc = 0x1e1748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e174c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E174Cu;
        // 0x1e1750: 0x27bd1090  addiu       $sp, $sp, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E174Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1754u;
    // 0x1e1754: 0x0  nop
    ctx->pc = 0x1e1754u;
    // NOP
    // 0x1e1758: 0x0  nop
    ctx->pc = 0x1e1758u;
    // NOP
    // 0x1e175c: 0x0  nop
    ctx->pc = 0x1e175cu;
    // NOP
    ctx->pc = 0x1e1760u;
}
