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

// Function: sub_002D12B0
// Address: 0x2d12b0 - 0x2d1870
void sub_002D12B0_0x2d12b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D12B0_0x2d12b0");
#endif

    switch (ctx->pc) {
        case 0x2d1320u: goto label_2d1320;
        case 0x2d1370u: goto label_2d1370;
        case 0x2d13f4u: goto label_2d13f4;
        case 0x2d143cu: goto label_2d143c;
        case 0x2d1448u: goto label_2d1448;
        case 0x2d14b8u: goto label_2d14b8;
        case 0x2d1540u: goto label_2d1540;
        case 0x2d1560u: goto label_2d1560;
        case 0x2d1580u: goto label_2d1580;
        case 0x2d1640u: goto label_2d1640;
        case 0x2d16b0u: goto label_2d16b0;
        case 0x2d173cu: goto label_2d173c;
        case 0x2d1788u: goto label_2d1788;
        case 0x2d1794u: goto label_2d1794;
        default: break;
    }

    ctx->pc = 0x2d12b0u;

    // 0x2d12b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2d12b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2d12b4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2d12b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x2d12b8: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x2d12b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x2d12bc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d12bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12c0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2d12c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2d12c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2d12c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12c8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2d12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2d12cc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2d12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x2d12d0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2d12d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x2d12d4: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x2d12d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x2d12d8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2d12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x2d12dc: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x2d12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x2d12e0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2d12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2d12e4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2d12e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2d12e8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2d12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2d12ec: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2d12f0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x2d12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x2d12f4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2d12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d12f8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2d12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2d12fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d12fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1304: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1304u;
    {
        const bool branch_taken_0x2d1304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1304u;
        // 0x2d1308: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1304) {
            ctx->pc = 0x2D133Cu;
            goto label_2d133c;
        }
    }
    ctx->pc = 0x2D130Cu;
    // 0x2d130c: 0x8ee30028  lw          $v1, 0x28($s7)
    ctx->pc = 0x2d130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x2d1310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d1310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d1314: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2d1314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2d1318: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d1318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d131c: 0x0  nop
    ctx->pc = 0x2d131cu;
    // NOP
label_2d1320:
    // 0x2d1320: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d1320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1324: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d1324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d1328: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2d1328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2d132c: 0x0  nop
    ctx->pc = 0x2d132cu;
    // NOP
    // 0x2d1330: 0x0  nop
    ctx->pc = 0x2d1330u;
    // NOP
    // 0x2d1334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D1334u;
    {
        const bool branch_taken_0x2d1334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1334u;
        // 0x2d1338: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1334) {
            ctx->pc = 0x2D1320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1320;
        }
    }
    ctx->pc = 0x2D133Cu;
label_2d133c:
    // 0x2d133c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2d1340: 0x26f40030  addiu       $s4, $s7, 0x30
    ctx->pc = 0x2d1340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x2d1344: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d1344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1348: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2d1348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2d134c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x2d134cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2d1350: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d1354: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D1354u;
    {
        const bool branch_taken_0x2d1354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1354u;
        // 0x2d1358: 0x8ef60028  lw          $s6, 0x28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1354) {
            ctx->pc = 0x2D14A0u;
            goto label_2d14a0;
        }
    }
    ctx->pc = 0x2D135Cu;
    // 0x2d135c: 0x3c13aaaa  lui         $s3, 0xAAAA
    ctx->pc = 0x2d135cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43690 << 16));
    // 0x2d1360: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d1360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d1364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1368: 0x3673aaab  ori         $s3, $s3, 0xAAAB
    ctx->pc = 0x2d1368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43691);
    // 0x2d136c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d136cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1370:
    // 0x2d1370: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1374: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2d1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2d1378: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2d1378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d137c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2d137cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d1380: 0x28943  sra         $s1, $v0, 5
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2d1384: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x2d1384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x2d1388: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x2d1388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x2d138c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d1390: 0x553004  sllv        $a2, $s5, $v0
    ctx->pc = 0x2d1390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d1394: 0x762821  addu        $a1, $v1, $s6
    ctx->pc = 0x2d1394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2d1398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d1398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d139c: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x2d139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2d13a0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D13A0u;
    {
        const bool branch_taken_0x2d13a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d13a0) {
            ctx->pc = 0x2D13A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13A0u;
            // 0x2d13a4: 0x96820006  lhu         $v0, 0x6($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1490u;
            goto label_2d1490;
        }
    }
    ctx->pc = 0x2D13A8u;
    // 0x2d13a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2d13a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2d13ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d13acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d13b0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d13b4: 0x8c623034  lw          $v0, 0x3034($v1)
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x683034u));
    // 0x2d13b8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2d13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2d13bc: 0x246372f0  addiu       $v1, $v1, 0x72F0
    ctx->pc = 0x2d13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29424));
    // 0x2d13c0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2d13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2d13c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d13c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d13c8: 0x54550018  bnel        $v0, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D13C8u;
    {
        const bool branch_taken_0x2d13c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2d13c8) {
            ctx->pc = 0x2D13CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13C8u;
            // 0x2d13cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D142Cu;
            goto label_2d142c;
        }
    }
    ctx->pc = 0x2D13D0u;
    // 0x2d13d0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2d13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d13d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d13d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d13d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d13dc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2d13dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d13e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D13E0u;
    {
        const bool branch_taken_0x2d13e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13E0u;
        // 0x2d13e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13e0) {
            ctx->pc = 0x2D1428u;
            goto label_2d1428;
        }
    }
    ctx->pc = 0x2D13E8u;
    // 0x2d13e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d13e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13ec: 0xc0b52bc  jal         func_2D4AF0
    ctx->pc = 0x2D13ECu;
    SET_GPR_U32(ctx, 31, 0x2D13F4u);
    ctx->pc = 0x2D13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13ECu;
    // 0x2d13f0: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4AF0u, 0x2D13ECu, 0x2D13F4u)) {
        return;
    }
    ctx->pc = 0x2D13F4u;
label_2d13f4:
    // 0x2d13f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d13f8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d13fc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2d13fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1400: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x2d1400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d1404: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2d1404u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1408: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2d1408u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d140c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2d140cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d1410: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2d1410u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d1414: 0x4a006fb8  vcallms     0xDF0
    ctx->pc = 0x2d1414u;
    {     ctx->vu0_tpc = 0xDF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDF0); }
    // 0x2d1418: 0x4a0002ff  vnop
    ctx->pc = 0x2d1418u;
    // NOP operation, no action needed for VU0
    // 0x2d141c: 0x48420801  cfc2.i      $v0, $vi1
    ctx->pc = 0x2d141cu;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
    // 0x2d1420: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1420u;
    {
        const bool branch_taken_0x2d1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1420) {
            ctx->pc = 0x2D1448u;
            goto label_2d1448;
        }
    }
    ctx->pc = 0x2D1428u;
label_2d1428:
    // 0x2d1428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d1428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d142c:
    // 0x2d142c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1434: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D1434u;
    SET_GPR_U32(ctx, 31, 0x2D143Cu);
    ctx->pc = 0x2D1438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1434u;
    // 0x2d1438: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D1434u, 0x2D143Cu)) {
        return;
    }
    ctx->pc = 0x2D143Cu;
label_2d143c:
    // 0x2d143c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2d143cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1440: 0xc0ad094  jal         func_2B4250
    ctx->pc = 0x2D1440u;
    SET_GPR_U32(ctx, 31, 0x2D1448u);
    ctx->pc = 0x2D1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1440u;
    // 0x2d1444: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4250u, 0x2D1440u, 0x2D1448u)) {
        return;
    }
    ctx->pc = 0x2D1448u;
label_2d1448:
    // 0x2d1448: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1448u;
    {
        const bool branch_taken_0x2d1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1448) {
            ctx->pc = 0x2D144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1448u;
            // 0x2d144c: 0x96820006  lhu         $v0, 0x6($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1490u;
            goto label_2d1490;
        }
    }
    ctx->pc = 0x2D1450u;
    // 0x2d1450: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x2d1450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2d1454: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2d1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2d1458: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d1458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d145c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D145Cu;
    {
        const bool branch_taken_0x2d145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D145Cu;
        // 0x2d1460: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d145c) {
            ctx->pc = 0x2D148Cu;
            goto label_2d148c;
        }
    }
    ctx->pc = 0x2D1464u;
    // 0x2d1464: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d1464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d1468: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2d1468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d146c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2d146cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2d1470: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2d1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d1474: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d147c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d147cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d1480: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x2d1480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x2d1484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1488: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2d1488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2d148c:
    // 0x2d148c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x2d148cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_2d1490:
    // 0x2d1490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d1494: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d1494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1498: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2D1498u;
    {
        const bool branch_taken_0x2d1498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1498u;
        // 0x2d149c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1498) {
            ctx->pc = 0x2D1370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1370;
        }
    }
    ctx->pc = 0x2D14A0u;
label_2d14a0:
    // 0x2d14a0: 0x8ee2002c  lw          $v0, 0x2C($s7)
    ctx->pc = 0x2d14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
    // 0x2d14a4: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2D14A4u;
    {
        const bool branch_taken_0x2d14a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14A4u;
        // 0x2d14a8: 0x8fa50080  lw          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14a4) {
            ctx->pc = 0x2D182Cu;
            goto label_2d182c;
        }
    }
    ctx->pc = 0x2D14ACu;
    // 0x2d14ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d14b0: 0xc0ad076  jal         func_2B41D8
    ctx->pc = 0x2D14B0u;
    SET_GPR_U32(ctx, 31, 0x2D14B8u);
    ctx->pc = 0x2D14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14B0u;
    // 0x2d14b4: 0x26e60050  addiu       $a2, $s7, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B41D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B41D8u, 0x2D14B0u, 0x2D14B8u)) {
        return;
    }
    ctx->pc = 0x2D14B8u;
label_2d14b8:
    // 0x2d14b8: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2d14b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d14bc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2d14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d14c0: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2d14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d14c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d14c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d14c8: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x2d14c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d14cc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2d14ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d14d0: 0xc6e60008  lwc1        $f6, 0x8($s7)
    ctx->pc = 0x2d14d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d14d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2d14d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d14d8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d14d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2d14dc: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2d14dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d14e0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2d14e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d14e4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2d14e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d14e8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2d14e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2d14ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2d14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d14f0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2d14f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2d14f4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2d14f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14f8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d14fc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2d14fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2d1500: 0x46002164  .word       0x46002164                   # cvt.w.s     $f5, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x2d1504: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x2d1504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d1508: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2d150c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2d150cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d1510: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2d1510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2d1514: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d1518: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d1518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d151c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d151cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d1520: 0x56182a  slt         $v1, $v0, $s6
    ctx->pc = 0x2d1520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d1524: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d1528: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2d1528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d152c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d152cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d1530: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2d1530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d1534: 0x546000be  bnel        $v1, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x2D1534u;
    {
        const bool branch_taken_0x2d1534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1534) {
            ctx->pc = 0x2D1538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1534u;
            // 0x2d1538: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1830u;
            goto label_2d1830;
        }
    }
    ctx->pc = 0x2D153Cu;
    // 0x2d153c: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x2d153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2d1540:
    // 0x2d1540: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x2d1540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1544: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2d1544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2d1548: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d154c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2d154cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d1550: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2D1550u;
    {
        const bool branch_taken_0x2d1550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1550u;
        // 0x2d1554: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1550) {
            ctx->pc = 0x2D181Cu;
            goto label_2d181c;
        }
    }
    ctx->pc = 0x2D1558u;
    // 0x2d1558: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2d1558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d155c: 0x0  nop
    ctx->pc = 0x2d155cu;
    // NOP
label_2d1560:
    // 0x2d1560: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2d1560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d1564: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1568: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d156c: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2D156Cu;
    {
        const bool branch_taken_0x2d156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D156Cu;
        // 0x2d1570: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d156c) {
            ctx->pc = 0x2D1804u;
            goto label_2d1804;
        }
    }
    ctx->pc = 0x2D1574u;
    // 0x2d1574: 0x122343  sra         $a0, $s2, 13
    ctx->pc = 0x2d1574u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 13));
    // 0x2d1578: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2d1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2d157c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2d157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2d1580:
    // 0x2d1580: 0x1162023  subu        $a0, $t0, $s6
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
    // 0x2d1584: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x2d1584u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d1588: 0x2d22823  subu        $a1, $s6, $s2
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x2d158c: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2d158cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d1590: 0x8ee7001c  lw          $a3, 0x1C($s7)
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2d1594: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x2d1594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d1598: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2d1598u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d159c: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x2d159cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d15a0: 0x2441823  subu        $v1, $s2, $a0
    ctx->pc = 0x2d15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2d15a4: 0x51343  sra         $v0, $a1, 13
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 13));
    // 0x2d15a8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d15ac: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2d15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2d15b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2d15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d15b4: 0x31303  sra         $v0, $v1, 12
    ctx->pc = 0x2d15b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2d15b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2d15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d15bc: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2d15bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d15c0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2d15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d15c4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d15c8: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2d15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d15cc: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x2d15ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d15d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d15d4: 0x51143  sra         $v0, $a1, 5
    ctx->pc = 0x2d15d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 5));
    // 0x2d15d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d15dc: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2d15dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2d15e0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2d15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d15e4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x2d15e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2d15e8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2d15e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d15ec: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2d15ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d15f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2d15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d15f4: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x2d15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x2d15f8: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2d15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d15fc: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x2d15fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d1600: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d1604: 0x513c3  sra         $v0, $a1, 15
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 15));
    // 0x2d1608: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d1608u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d160c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2d160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2d1610: 0x8ee60018  lw          $a2, 0x18($s7)
    ctx->pc = 0x2d1610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x2d1614: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x2d1614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2d1618: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x2d1618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2d161c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2d161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d1620: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d1624: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x2d1624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x2d1628: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2d1628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d162c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1630: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2d1630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1634u;
    {
        const bool branch_taken_0x2d1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1634u;
        // 0x2d1638: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1634) {
            ctx->pc = 0x2D1644u;
            goto label_2d1644;
        }
    }
    ctx->pc = 0x2D163Cu;
    // 0x2d163c: 0x0  nop
    ctx->pc = 0x2d163cu;
    // NOP
label_2d1640:
    // 0x2d1640: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2d1644:
    // 0x2d1644: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1644u;
    {
        const bool branch_taken_0x2d1644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1644u;
        // 0x2d1648: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1644) {
            ctx->pc = 0x2D1674u;
            goto label_2d1674;
        }
    }
    ctx->pc = 0x2D164Cu;
    // 0x2d164c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2d164cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1650: 0x5448fffb  bnel        $v0, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D1650u;
    {
        const bool branch_taken_0x2d1650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2d1650) {
            ctx->pc = 0x2D1654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1650u;
            // 0x2d1654: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1640;
        }
    }
    ctx->pc = 0x2D1658u;
    // 0x2d1658: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2d1658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d165c: 0x5456fff8  bnel        $v0, $s6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D165Cu;
    {
        const bool branch_taken_0x2d165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d165c) {
            ctx->pc = 0x2D1660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D165Cu;
            // 0x2d1660: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1640;
        }
    }
    ctx->pc = 0x2D1664u;
    // 0x2d1664: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d1668: 0x5452fff5  bnel        $v0, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D1668u;
    {
        const bool branch_taken_0x2d1668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1668) {
            ctx->pc = 0x2D166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1668u;
            // 0x2d166c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1640;
        }
    }
    ctx->pc = 0x2D1670u;
    // 0x2d1670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d1670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1674:
    // 0x2d1674: 0x65980b  movn        $s3, $v1, $a1
    ctx->pc = 0x2d1674u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x2d1678: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x2D1678u;
    {
        const bool branch_taken_0x2d1678 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1678u;
        // 0x2d167c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1678) {
            ctx->pc = 0x2D17F4u;
            goto label_2d17f4;
        }
    }
    ctx->pc = 0x2D1680u;
    // 0x2d1680: 0x8ee40028  lw          $a0, 0x28($s7)
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x2d1684: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d1684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1688: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x2d1688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x2d168c: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x2d168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
    // 0x2d1690: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2D1690u;
    {
        const bool branch_taken_0x2d1690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1690u;
        // 0x2d1694: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1690) {
            ctx->pc = 0x2D17F0u;
            goto label_2d17f0;
        }
    }
    ctx->pc = 0x2D1698u;
    // 0x2d1698: 0x3c15aaaa  lui         $s5, 0xAAAA
    ctx->pc = 0x2d1698u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)43690 << 16));
    // 0x2d169c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d169cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d16a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d16a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16a4: 0x36b5aaab  ori         $s5, $s5, 0xAAAB
    ctx->pc = 0x2d16a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)43691);
    // 0x2d16a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d16a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d16ac: 0x0  nop
    ctx->pc = 0x2d16acu;
    // NOP
label_2d16b0:
    // 0x2d16b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d16b4: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2d16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2d16b8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2d16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d16bc: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x2d16bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d16c0: 0x28943  sra         $s1, $v0, 5
    ctx->pc = 0x2d16c0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2d16c4: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x2d16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x2d16c8: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x2d16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x2d16cc: 0x493004  sllv        $a2, $t1, $v0
    ctx->pc = 0x2d16ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d16d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d16d4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2d16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2d16d8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2d16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d16dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d16e0: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x2d16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2d16e4: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D16E4u;
    {
        const bool branch_taken_0x2d16e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d16e4) {
            ctx->pc = 0x2D16E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D16E4u;
            // 0x2d16e8: 0x96620006  lhu         $v0, 0x6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D17E0u;
            goto label_2d17e0;
        }
    }
    ctx->pc = 0x2D16ECu;
    // 0x2d16ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2d16ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2d16f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d16f4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d16f8: 0x8c623034  lw          $v0, 0x3034($v1)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x683034u));
    // 0x2d16fc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2d16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2d1700: 0x246372f0  addiu       $v1, $v1, 0x72F0
    ctx->pc = 0x2d1700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29424));
    // 0x2d1704: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2d1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2d1708: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d170c: 0x54490019  bnel        $v0, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D170Cu;
    {
        const bool branch_taken_0x2d170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x2d170c) {
            ctx->pc = 0x2D1710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D170Cu;
            // 0x2d1710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1774u;
            goto label_2d1774;
        }
    }
    ctx->pc = 0x2D1714u;
    // 0x2d1714: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2d1714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d1718: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d1718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d171c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1720: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2d1720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d1724: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1724u;
    {
        const bool branch_taken_0x2d1724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1724u;
        // 0x2d1728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1724) {
            ctx->pc = 0x2D1770u;
            goto label_2d1770;
        }
    }
    ctx->pc = 0x2D172Cu;
    // 0x2d172c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d172cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1730: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2d1730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1734: 0xc0b52bc  jal         func_2D4AF0
    ctx->pc = 0x2D1734u;
    SET_GPR_U32(ctx, 31, 0x2D173Cu);
    ctx->pc = 0x2D1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1734u;
    // 0x2d1738: 0x7fa900a0  sq          $t1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4AF0u, 0x2D1734u, 0x2D173Cu)) {
        return;
    }
    ctx->pc = 0x2D173Cu;
label_2d173c:
    // 0x2d173c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1740: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2d1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1744: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2d1744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1748: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x2d1748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d174c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2d174cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1750: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2d1750u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d1754: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2d1754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d1758: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2d1758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d175c: 0x4a006fb8  vcallms     0xDF0
    ctx->pc = 0x2d175cu;
    {     ctx->vu0_tpc = 0xDF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDF0); }
    // 0x2d1760: 0x4a0002ff  vnop
    ctx->pc = 0x2d1760u;
    // NOP operation, no action needed for VU0
    // 0x2d1764: 0x48420801  cfc2.i      $v0, $vi1
    ctx->pc = 0x2d1764u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
    // 0x2d1768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D1768u;
    {
        const bool branch_taken_0x2d1768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1768u;
        // 0x2d176c: 0x7ba900a0  lq          $t1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1768) {
            ctx->pc = 0x2D1798u;
            goto label_2d1798;
        }
    }
    ctx->pc = 0x2D1770u;
label_2d1770:
    // 0x2d1770: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d1770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d1774:
    // 0x2d1774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1778: 0x7fa900a0  sq          $t1, 0xA0($sp)
    ctx->pc = 0x2d1778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 9));
    // 0x2d177c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d177cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1780: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D1780u;
    SET_GPR_U32(ctx, 31, 0x2D1788u);
    ctx->pc = 0x2D1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1780u;
    // 0x2d1784: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D1780u, 0x2D1788u)) {
        return;
    }
    ctx->pc = 0x2D1788u;
label_2d1788:
    // 0x2d1788: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2d1788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d178c: 0xc0ad094  jal         func_2B4250
    ctx->pc = 0x2D178Cu;
    SET_GPR_U32(ctx, 31, 0x2D1794u);
    ctx->pc = 0x2D1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D178Cu;
    // 0x2d1790: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4250u, 0x2D178Cu, 0x2D1794u)) {
        return;
    }
    ctx->pc = 0x2D1794u;
label_2d1794:
    // 0x2d1794: 0x7ba900a0  lq          $t1, 0xA0($sp)
    ctx->pc = 0x2d1794u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d1798:
    // 0x2d1798: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1798u;
    {
        const bool branch_taken_0x2d1798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1798) {
            ctx->pc = 0x2D179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1798u;
            // 0x2d179c: 0x96620006  lhu         $v0, 0x6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D17E0u;
            goto label_2d17e0;
        }
    }
    ctx->pc = 0x2D17A0u;
    // 0x2d17a0: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2d17a4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2d17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2d17a8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d17a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d17ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D17ACu;
    {
        const bool branch_taken_0x2d17ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17ACu;
        // 0x2d17b0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17ac) {
            ctx->pc = 0x2D17DCu;
            goto label_2d17dc;
        }
    }
    ctx->pc = 0x2D17B4u;
    // 0x2d17b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d17b8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2d17b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d17bc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2d17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2d17c0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2d17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d17c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d17c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d17cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d17d0: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x2d17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x2d17d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d17d8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2d17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2d17dc:
    // 0x2d17dc: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x2d17dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_2d17e0:
    // 0x2d17e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d17e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d17e4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d17e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d17e8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2D17E8u;
    {
        const bool branch_taken_0x2d17e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17E8u;
        // 0x2d17ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17e8) {
            ctx->pc = 0x2D16B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d16b0;
        }
    }
    ctx->pc = 0x2D17F0u;
label_2d17f0:
    // 0x2d17f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d17f4:
    // 0x2d17f4: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2d17f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d17f8: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2d17f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d17fc: 0x1040ff60  beqz        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x2D17FCu;
    {
        const bool branch_taken_0x2d17fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17FCu;
        // 0x2d1800: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17fc) {
            ctx->pc = 0x2D1580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1580;
        }
    }
    ctx->pc = 0x2D1804u;
label_2d1804:
    // 0x2d1804: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d1804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1808: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x2d1808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d180c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2d180cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d1810: 0x5040ff53  beql        $v0, $zero, . + 4 + (-0xAD << 2)
    ctx->pc = 0x2D1810u;
    {
        const bool branch_taken_0x2d1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1810) {
            ctx->pc = 0x2D1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1810u;
            // 0x2d1814: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1560;
        }
    }
    ctx->pc = 0x2D1818u;
    // 0x2d1818: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d181c:
    // 0x2d181c: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x2d181cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2d1820: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2d1820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2d1824: 0x1040ff46  beqz        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x2D1824u;
    {
        const bool branch_taken_0x2d1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1824u;
        // 0x2d1828: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1824) {
            ctx->pc = 0x2D1540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1540;
        }
    }
    ctx->pc = 0x2D182Cu;
label_2d182c:
    // 0x2d182c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2d182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2d1830:
    // 0x2d1830: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2d1830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2d1834: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2d1834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d1838: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2d1838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d183c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d183cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1840: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2d1840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d1844: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2d1844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d1848: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2d1848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d184c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2d184cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1850: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2d1850u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1854: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2d1854u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d1858: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2d1858u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d185c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2d185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d1860: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2d1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1864: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1864u;
        // 0x2d1868: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D186Cu;
    // 0x2d186c: 0x0  nop
    ctx->pc = 0x2d186cu;
    // NOP
    ctx->pc = 0x2d1870u;
}
