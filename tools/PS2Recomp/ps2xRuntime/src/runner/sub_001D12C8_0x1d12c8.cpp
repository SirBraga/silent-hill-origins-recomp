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

// Function: sub_001D12C8
// Address: 0x1d12c8 - 0x1d1598
void sub_001D12C8_0x1d12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D12C8_0x1d12c8");
#endif

    switch (ctx->pc) {
        case 0x1d1314u: goto label_1d1314;
        case 0x1d1330u: goto label_1d1330;
        case 0x1d1344u: goto label_1d1344;
        case 0x1d134cu: goto label_1d134c;
        case 0x1d1358u: goto label_1d1358;
        case 0x1d1360u: goto label_1d1360;
        case 0x1d1368u: goto label_1d1368;
        case 0x1d1388u: goto label_1d1388;
        case 0x1d13a4u: goto label_1d13a4;
        case 0x1d13c0u: goto label_1d13c0;
        case 0x1d13e0u: goto label_1d13e0;
        case 0x1d1410u: goto label_1d1410;
        case 0x1d1444u: goto label_1d1444;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1560u: goto label_1d1560;
        default: break;
    }

    ctx->pc = 0x1d12c8u;

    // 0x1d12c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d12cc: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1d12d0: 0x8c449a54  lw          $a0, -0x65AC($v0)
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339A54u));
    // 0x1d12d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d12d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12d8: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1d12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x1d12dc: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1d12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x1d12e0: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x1d12e4: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x1d12e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1d12e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d12e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12ec: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1d12ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1d12f0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1d12f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1d12f4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1d12f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1d12f8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1d12f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1d12fc: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1d12fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1d1300: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1d1300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1d1304: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1d1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x1d1308: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1d1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1d130c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1D130Cu;
    SET_GPR_U32(ctx, 31, 0x1D1314u);
    ctx->pc = 0x1D1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D130Cu;
    // 0x1d1310: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D130Cu, 0x1D1314u)) {
        return;
    }
    ctx->pc = 0x1D1314u;
label_1d1314:
    // 0x1d1314: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1d1314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1d1318: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d1318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d131c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d1320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1324: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d1328: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1D1328u;
    SET_GPR_U32(ctx, 31, 0x1D1330u);
    ctx->pc = 0x1D132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1328u;
    // 0x1d132c: 0x8c449a58  lw          $a0, -0x65A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D1328u, 0x1D1330u)) {
        return;
    }
    ctx->pc = 0x1D1330u;
label_1d1330:
    // 0x1d1330: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1d1330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1d1334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1338: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d133c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1D133Cu;
    SET_GPR_U32(ctx, 31, 0x1D1344u);
    ctx->pc = 0x1D1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D133Cu;
    // 0x1d1340: 0x8c449a50  lw          $a0, -0x65B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D133Cu, 0x1D1344u)) {
        return;
    }
    ctx->pc = 0x1D1344u;
label_1d1344:
    // 0x1d1344: 0xc07597e  jal         func_1D65F8
    ctx->pc = 0x1D1344u;
    SET_GPR_U32(ctx, 31, 0x1D134Cu);
    ctx->pc = 0x1D1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1344u;
    // 0x1d1348: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65F8u, 0x1D1344u, 0x1D134Cu)) {
        return;
    }
    ctx->pc = 0x1D134Cu;
label_1d134c:
    // 0x1d134c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d134cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1350: 0xc074444  jal         func_1D1110
    ctx->pc = 0x1D1350u;
    SET_GPR_U32(ctx, 31, 0x1D1358u);
    ctx->pc = 0x1D1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1350u;
    // 0x1d1354: 0xac629b1c  sw          $v0, -0x64E4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1110u, 0x1D1350u, 0x1D1358u)) {
        return;
    }
    ctx->pc = 0x1D1358u;
label_1d1358:
    // 0x1d1358: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d135c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1d135cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_1d1360:
    // 0x1d1360: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D1360u;
    SET_GPR_U32(ctx, 31, 0x1D1368u);
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D1360u, 0x1D1368u)) {
        return;
    }
    ctx->pc = 0x1D1368u;
label_1d1368:
    // 0x1d1368: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x1d1368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d136c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d1370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1374: 0x24650cc0  addiu       $a1, $v1, 0xCC0
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3264));
    // 0x1d1378: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1d1378u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d137c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d137cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1380: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D1380u;
    SET_GPR_U32(ctx, 31, 0x1D1388u);
    ctx->pc = 0x1D1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1380u;
    // 0x1d1384: 0x8fb500c0  lw          $s5, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D1380u, 0x1D1388u)) {
        return;
    }
    ctx->pc = 0x1D1388u;
label_1d1388:
    // 0x1d1388: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1d1388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d138c: 0x8ec59b18  lw          $a1, -0x64E8($s6)
    ctx->pc = 0x1d138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d1390: 0x2e49818  mult        $s3, $s7, $a0
    ctx->pc = 0x1d1390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1d1394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1398: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1d139c: 0xc075984  jal         func_1D6610
    ctx->pc = 0x1D139Cu;
    SET_GPR_U32(ctx, 31, 0x1D13A4u);
    ctx->pc = 0x1D13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D139Cu;
    // 0x1d13a0: 0x24a50124  addiu       $a1, $a1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6610u, 0x1D139Cu, 0x1D13A4u)) {
        return;
    }
    ctx->pc = 0x1D13A4u;
label_1d13a4:
    // 0x1d13a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d13a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13a8: 0x12800054  beqz        $s4, . + 4 + (0x54 << 2)
    ctx->pc = 0x1D13A8u;
    {
        const bool branch_taken_0x1d13a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13A8u;
        // 0x1d13ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13a8) {
            ctx->pc = 0x1D14FCu;
            goto label_1d14fc;
        }
    }
    ctx->pc = 0x1D13B0u;
    // 0x1d13b0: 0x8ec49b18  lw          $a0, -0x64E8($s6)
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d13b4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d13b8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1D13B8u;
    SET_GPR_U32(ctx, 31, 0x1D13C0u);
    ctx->pc = 0x1D13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13B8u;
    // 0x1d13bc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D13B8u, 0x1D13C0u)) {
        return;
    }
    ctx->pc = 0x1D13C0u;
label_1d13c0:
    // 0x1d13c0: 0x8ec39b18  lw          $v1, -0x64E8($s6)
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d13c4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d13c8: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x1d13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x1d13cc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D13CCu;
    {
        const bool branch_taken_0x1d13cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13CCu;
        // 0x1d13d0: 0x8fb500c4  lw          $s5, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13cc) {
            ctx->pc = 0x1D14FCu;
            goto label_1d14fc;
        }
    }
    ctx->pc = 0x1D13D4u;
    // 0x1d13d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d13d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13d8: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1D13D8u;
    SET_GPR_U32(ctx, 31, 0x1D13E0u);
    ctx->pc = 0x1D13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13D8u;
    // 0x1d13dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D13D8u, 0x1D13E0u)) {
        return;
    }
    ctx->pc = 0x1D13E0u;
label_1d13e0:
    // 0x1d13e0: 0x8ec39b18  lw          $v1, -0x64E8($s6)
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d13e4: 0x8fb500c8  lw          $s5, 0xC8($sp)
    ctx->pc = 0x1d13e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d13e8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d13ec: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x1d13f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d13f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d13f4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1d13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1d13f8: 0xc6940020  lwc1        $f20, 0x20($s4)
    ctx->pc = 0x1d13f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d13fc: 0x0  nop
    ctx->pc = 0x1d13fcu;
    // NOP
    // 0x1d1400: 0x0  nop
    ctx->pc = 0x1d1400u;
    // NOP
    // 0x1d1404: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x1d1404u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[12]);
    // 0x1d1408: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1D1408u;
    SET_GPR_U32(ctx, 31, 0x1D1410u);
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1D1408u, 0x1D1410u)) {
        return;
    }
    ctx->pc = 0x1D1410u;
label_1d1410:
    // 0x1d1410: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d1414: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1d1414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1d1418: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d1418u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d141c: 0x0  nop
    ctx->pc = 0x1d141cu;
    // NOP
    // 0x1d1420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d1424: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d1424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d1428: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d1428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d142c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1d142cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1d1430: 0x0  nop
    ctx->pc = 0x1d1430u;
    // NOP
    // 0x1d1434: 0x0  nop
    ctx->pc = 0x1d1434u;
    // NOP
    // 0x1d1438: 0x4615a303  div.s       $f12, $f20, $f21
    ctx->pc = 0x1d1438u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[21]);
    // 0x1d143c: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1D143Cu;
    SET_GPR_U32(ctx, 31, 0x1D1444u);
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1D143Cu, 0x1D1444u)) {
        return;
    }
    ctx->pc = 0x1D1444u;
label_1d1444:
    // 0x1d1444: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d1448: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1d1448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d144c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1d144cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1450: 0x0  nop
    ctx->pc = 0x1d1450u;
    // NOP
    // 0x1d1454: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d1454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d1458: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1d1458u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d145c: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x1D145Cu;
    SET_GPR_U32(ctx, 31, 0x1D1464u);
    ctx->pc = 0x1D1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D145Cu;
    // 0x1d1460: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1D145Cu, 0x1D1464u)) {
        return;
    }
    ctx->pc = 0x1D1464u;
label_1d1464:
    // 0x1d1464: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1464u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d1468: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1d1468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1d146c: 0x8ec49b18  lw          $a0, -0x64E8($s6)
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d1470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d1474: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d1474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1478: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d147c: 0x24450cc8  addiu       $a1, $v0, 0xCC8
    ctx->pc = 0x1d147cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3272));
    // 0x1d1480: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x1d1484: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d1484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1488: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D1488u;
    SET_GPR_U32(ctx, 31, 0x1D1490u);
    ctx->pc = 0x1D148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1488u;
    // 0x1d148c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1488u, 0x1D1490u)) {
        return;
    }
    ctx->pc = 0x1D1490u;
label_1d1490:
    // 0x1d1490: 0x8ec49b18  lw          $a0, -0x64E8($s6)
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d1494: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d1494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d1498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d1498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d149c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1d149cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d14a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d14a4: 0x24650ce8  addiu       $a1, $v1, 0xCE8
    ctx->pc = 0x1d14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
    // 0x1d14a8: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1d14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1d14ac: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D14ACu;
    SET_GPR_U32(ctx, 31, 0x1D14B4u);
    ctx->pc = 0x1D14B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14ACu;
    // 0x1d14b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D14ACu, 0x1D14B4u)) {
        return;
    }
    ctx->pc = 0x1D14B4u;
label_1d14b4:
    // 0x1d14b4: 0x8ec49b18  lw          $a0, -0x64E8($s6)
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d14b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d14bc: 0x86860024  lh          $a2, 0x24($s4)
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1d14c0: 0x24450d08  addiu       $a1, $v0, 0xD08
    ctx->pc = 0x1d14c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3336));
    // 0x1d14c4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d14c8: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D14C8u;
    SET_GPR_U32(ctx, 31, 0x1D14D0u);
    ctx->pc = 0x1D14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14C8u;
    // 0x1d14cc: 0x248400e4  addiu       $a0, $a0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D14C8u, 0x1D14D0u)) {
        return;
    }
    ctx->pc = 0x1D14D0u;
label_1d14d0:
    // 0x1d14d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d14d4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1d14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d14d8: 0x24650d18  addiu       $a1, $v1, 0xD18
    ctx->pc = 0x1d14d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3352));
    // 0x1d14dc: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D14DCu;
    SET_GPR_U32(ctx, 31, 0x1D14E4u);
    ctx->pc = 0x1D14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14DCu;
    // 0x1d14e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D14DCu, 0x1D14E4u)) {
        return;
    }
    ctx->pc = 0x1D14E4u;
label_1d14e4:
    // 0x1d14e4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1d14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d14e8: 0xc06d0e4  jal         func_1B4390
    ctx->pc = 0x1D14E8u;
    SET_GPR_U32(ctx, 31, 0x1D14F0u);
    ctx->pc = 0x1D14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14E8u;
    // 0x1d14ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4390u, 0x1D14E8u, 0x1D14F0u)) {
        return;
    }
    ctx->pc = 0x1D14F0u;
label_1d14f0:
    // 0x1d14f0: 0x8ec39b18  lw          $v1, -0x64E8($s6)
    ctx->pc = 0x1d14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d14f4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d14f8: 0xac620128  sw          $v0, 0x128($v1)
    ctx->pc = 0x1d14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 2));
label_1d14fc:
    // 0x1d14fc: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d1500: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d1500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1504: 0x2e41018  mult        $v0, $s7, $a0
    ctx->pc = 0x1d1504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1508: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d1508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d150c: 0x8ec49b18  lw          $a0, -0x64E8($s6)
    ctx->pc = 0x1d150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d1510: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x1d1510u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1514: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D1514u;
    SET_GPR_U32(ctx, 31, 0x1D151Cu);
    ctx->pc = 0x1D1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1514u;
    // 0x1d1518: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1514u, 0x1D151Cu)) {
        return;
    }
    ctx->pc = 0x1D151Cu;
label_1d151c:
    // 0x1d151c: 0x2ae3000a  slti        $v1, $s7, 0xA
    ctx->pc = 0x1d151cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1520: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x1D1520u;
    {
        const bool branch_taken_0x1d1520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1520u;
        // 0x1d1524: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1520) {
            ctx->pc = 0x1D1360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1360;
        }
    }
    ctx->pc = 0x1D1528u;
    // 0x1d1528: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d152c: 0x8c629b20  lw          $v0, -0x64E0($v1)
    ctx->pc = 0x1d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941472)));
    // 0x1d1530: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d1534: 0xac809b34  sw          $zero, -0x64CC($a0)
    ctx->pc = 0x1d1534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B34u, _value); } while (0);
    // 0x1d1538: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d153c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1d153cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1540: 0x24a50cb0  addiu       $a1, $a1, 0xCB0
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3248));
    // 0x1d1544: 0x8c869b34  lw          $a2, -0x64CC($a0)
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x339B34u));
    // 0x1d1548: 0x8ec29b18  lw          $v0, -0x64E8($s6)
    ctx->pc = 0x1d1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941464)));
    // 0x1d154c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1d154cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d1550: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1554: 0x8c649b20  lw          $a0, -0x64E0($v1)
    ctx->pc = 0x1d1554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B20u));
    // 0x1d1558: 0xc0c5380  jal         func_314E00
    ctx->pc = 0x1D1558u;
    SET_GPR_U32(ctx, 31, 0x1D1560u);
    ctx->pc = 0x1D155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1558u;
    // 0x1d155c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1D1558u, 0x1D1560u)) {
        return;
    }
    ctx->pc = 0x1D1560u;
label_1d1560:
    // 0x1d1560: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1d1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d1564: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1d1564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d1568: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1d1568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d156c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1d156cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d1570: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1d1570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d1574: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1d1574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d1578: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1d1578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d157c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1d157cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1580: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x1d1580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1584: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1d1584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d1588: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1d1588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d158c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1d158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1590: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1590u;
        // 0x1d1594: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1598u;
}
