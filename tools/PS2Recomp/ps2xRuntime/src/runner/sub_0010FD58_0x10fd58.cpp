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

// Function: sub_0010FD58
// Address: 0x10fd58 - 0x1104f8
void sub_0010FD58_0x10fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FD58_0x10fd58");
#endif

    switch (ctx->pc) {
        case 0x10fd98u: goto label_10fd98;
        case 0x10fda0u: goto label_10fda0;
        case 0x10fe90u: goto label_10fe90;
        case 0x10fea8u: goto label_10fea8;
        case 0x10fec0u: goto label_10fec0;
        case 0x10fed8u: goto label_10fed8;
        case 0x10fef0u: goto label_10fef0;
        case 0x10ff08u: goto label_10ff08;
        case 0x10ff20u: goto label_10ff20;
        case 0x10ff38u: goto label_10ff38;
        case 0x10ff50u: goto label_10ff50;
        case 0x10ff68u: goto label_10ff68;
        case 0x10ff80u: goto label_10ff80;
        case 0x10ff98u: goto label_10ff98;
        case 0x10ffb0u: goto label_10ffb0;
        case 0x10ffc8u: goto label_10ffc8;
        case 0x10ffe0u: goto label_10ffe0;
        case 0x10fff8u: goto label_10fff8;
        case 0x110010u: goto label_110010;
        case 0x110028u: goto label_110028;
        case 0x110040u: goto label_110040;
        case 0x110058u: goto label_110058;
        case 0x110070u: goto label_110070;
        case 0x110088u: goto label_110088;
        case 0x1100a0u: goto label_1100a0;
        case 0x1100b8u: goto label_1100b8;
        case 0x1100d0u: goto label_1100d0;
        case 0x1100e8u: goto label_1100e8;
        case 0x110104u: goto label_110104;
        case 0x110120u: goto label_110120;
        case 0x11013cu: goto label_11013c;
        case 0x110158u: goto label_110158;
        case 0x110174u: goto label_110174;
        case 0x110190u: goto label_110190;
        case 0x1101acu: goto label_1101ac;
        case 0x1101c4u: goto label_1101c4;
        case 0x1101dcu: goto label_1101dc;
        case 0x1101f4u: goto label_1101f4;
        case 0x11020cu: goto label_11020c;
        case 0x110224u: goto label_110224;
        case 0x11023cu: goto label_11023c;
        case 0x110254u: goto label_110254;
        case 0x11026cu: goto label_11026c;
        case 0x110284u: goto label_110284;
        case 0x11029cu: goto label_11029c;
        case 0x1102b4u: goto label_1102b4;
        case 0x1102ccu: goto label_1102cc;
        case 0x1102e4u: goto label_1102e4;
        case 0x1102fcu: goto label_1102fc;
        case 0x110314u: goto label_110314;
        case 0x11032cu: goto label_11032c;
        case 0x110344u: goto label_110344;
        case 0x11035cu: goto label_11035c;
        case 0x110374u: goto label_110374;
        case 0x11038cu: goto label_11038c;
        case 0x1103a4u: goto label_1103a4;
        case 0x1103bcu: goto label_1103bc;
        case 0x1103d4u: goto label_1103d4;
        case 0x1103ecu: goto label_1103ec;
        case 0x110404u: goto label_110404;
        case 0x11041cu: goto label_11041c;
        case 0x110430u: goto label_110430;
        case 0x110444u: goto label_110444;
        case 0x110458u: goto label_110458;
        case 0x11046cu: goto label_11046c;
        case 0x110480u: goto label_110480;
        case 0x110494u: goto label_110494;
        case 0x1104a8u: goto label_1104a8;
        case 0x1104b8u: goto label_1104b8;
        case 0x1104c4u: goto label_1104c4;
        default: break;
    }

    ctx->pc = 0x10fd58u;

    // 0x10fd58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10fd5c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x10fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x10fd60: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x10fd60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd64: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x10fd68: 0x27c20044  addiu       $v0, $fp, 0x44
    ctx->pc = 0x10fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
    // 0x10fd6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x10fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x10fd70: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x10fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x10fd74: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x10fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x10fd78: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x10fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x10fd7c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x10fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x10fd80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10fd84: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x10fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x10fd88: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x10fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x10fd8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10fd90: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x10FD90u;
    SET_GPR_U32(ctx, 31, 0x10FD98u);
    ctx->pc = 0x10FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD90u;
    // 0x10fd94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x10FD90u, 0x10FD98u)) {
        return;
    }
    ctx->pc = 0x10FD98u;
label_10fd98:
    // 0x10fd98: 0xc043c50  jal         func_10F140
    ctx->pc = 0x10FD98u;
    SET_GPR_U32(ctx, 31, 0x10FDA0u);
    ctx->pc = 0x10FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD98u;
    // 0x10fd9c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x10FD98u, 0x10FDA0u)) {
        return;
    }
    ctx->pc = 0x10FDA0u;
label_10fda0:
    // 0x10fda0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10fda4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10fda8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x10fdac: 0x2442a6c8  addiu       $v0, $v0, -0x5938
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944456));
    // 0x10fdb0: 0x2463a6b0  addiu       $v1, $v1, -0x5950
    ctx->pc = 0x10fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944432));
    // 0x10fdb4: 0x2484a6e8  addiu       $a0, $a0, -0x5918
    ctx->pc = 0x10fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944488));
    // 0x10fdb8: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x10fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x10fdbc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10fdc0: 0xafc30048  sw          $v1, 0x48($fp)
    ctx->pc = 0x10fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 3));
    // 0x10fdc4: 0xafc40034  sw          $a0, 0x34($fp)
    ctx->pc = 0x10fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 4));
    // 0x10fdc8: 0x8ca2438c  lw          $v0, 0x438C($a1)
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B438Cu));
    // 0x10fdcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FDCCu;
    {
        const bool branch_taken_0x10fdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fdcc) {
            ctx->pc = 0x10FDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FDCCu;
            // 0x10fdd0: 0xafc0004c  sw          $zero, 0x4C($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FDE8u;
            goto label_10fde8;
        }
    }
    ctx->pc = 0x10FDD4u;
    // 0x10fdd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10fdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fddc: 0xaca2438c  sw          $v0, 0x438C($a1)
    ctx->pc = 0x10fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 17292), GPR_U32(ctx, 2));
    // 0x10fde0: 0xac7e4388  sw          $fp, 0x4388($v1)
    ctx->pc = 0x10fde0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x6B4388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4388u, _value); } while (0);
    // 0x10fde4: 0xafc0004c  sw          $zero, 0x4C($fp)
    ctx->pc = 0x10fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 0));
label_10fde8:
    // 0x10fde8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x10fdec: 0xafc00050  sw          $zero, 0x50($fp)
    ctx->pc = 0x10fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 0));
    // 0x10fdf0: 0xafc00054  sw          $zero, 0x54($fp)
    ctx->pc = 0x10fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 0));
    // 0x10fdf4: 0xafc00058  sw          $zero, 0x58($fp)
    ctx->pc = 0x10fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 0));
    // 0x10fdf8: 0xafc0005c  sw          $zero, 0x5C($fp)
    ctx->pc = 0x10fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 0));
    // 0x10fdfc: 0xafc00060  sw          $zero, 0x60($fp)
    ctx->pc = 0x10fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 0));
    // 0x10fe00: 0xafc00064  sw          $zero, 0x64($fp)
    ctx->pc = 0x10fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 0));
    // 0x10fe04: 0xafc00068  sw          $zero, 0x68($fp)
    ctx->pc = 0x10fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 0));
    // 0x10fe08: 0xafc0006c  sw          $zero, 0x6C($fp)
    ctx->pc = 0x10fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 108), GPR_U32(ctx, 0));
    // 0x10fe0c: 0xafc00070  sw          $zero, 0x70($fp)
    ctx->pc = 0x10fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 0));
    // 0x10fe10: 0xafc00074  sw          $zero, 0x74($fp)
    ctx->pc = 0x10fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 0));
    // 0x10fe14: 0xafc00078  sw          $zero, 0x78($fp)
    ctx->pc = 0x10fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 0));
    // 0x10fe18: 0xafc0007c  sw          $zero, 0x7C($fp)
    ctx->pc = 0x10fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 0));
    // 0x10fe1c: 0xafc00080  sw          $zero, 0x80($fp)
    ctx->pc = 0x10fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 0));
    // 0x10fe20: 0xafc00084  sw          $zero, 0x84($fp)
    ctx->pc = 0x10fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 0));
    // 0x10fe24: 0xafc00088  sw          $zero, 0x88($fp)
    ctx->pc = 0x10fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 136), GPR_U32(ctx, 0));
    // 0x10fe28: 0xafc0008c  sw          $zero, 0x8C($fp)
    ctx->pc = 0x10fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 0));
    // 0x10fe2c: 0xafc00090  sw          $zero, 0x90($fp)
    ctx->pc = 0x10fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 144), GPR_U32(ctx, 0));
    // 0x10fe30: 0xafc00094  sw          $zero, 0x94($fp)
    ctx->pc = 0x10fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 148), GPR_U32(ctx, 0));
    // 0x10fe34: 0xafc00098  sw          $zero, 0x98($fp)
    ctx->pc = 0x10fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 0));
    // 0x10fe38: 0xafc0009c  sw          $zero, 0x9C($fp)
    ctx->pc = 0x10fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 156), GPR_U32(ctx, 0));
    // 0x10fe3c: 0xafc000a0  sw          $zero, 0xA0($fp)
    ctx->pc = 0x10fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 160), GPR_U32(ctx, 0));
    // 0x10fe40: 0xafc000a4  sw          $zero, 0xA4($fp)
    ctx->pc = 0x10fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 0));
    // 0x10fe44: 0xafc000a8  sw          $zero, 0xA8($fp)
    ctx->pc = 0x10fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 0));
    // 0x10fe48: 0xafc000ac  sw          $zero, 0xAC($fp)
    ctx->pc = 0x10fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 0));
    // 0x10fe4c: 0xafc000b0  sw          $zero, 0xB0($fp)
    ctx->pc = 0x10fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 0));
    // 0x10fe50: 0xafc000b4  sw          $zero, 0xB4($fp)
    ctx->pc = 0x10fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 180), GPR_U32(ctx, 0));
    // 0x10fe54: 0xafc000b8  sw          $zero, 0xB8($fp)
    ctx->pc = 0x10fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 184), GPR_U32(ctx, 0));
    // 0x10fe58: 0xafc000bc  sw          $zero, 0xBC($fp)
    ctx->pc = 0x10fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 188), GPR_U32(ctx, 0));
    // 0x10fe5c: 0xafc000c0  sw          $zero, 0xC0($fp)
    ctx->pc = 0x10fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 0));
    // 0x10fe60: 0xafc000c4  sw          $zero, 0xC4($fp)
    ctx->pc = 0x10fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 0));
    // 0x10fe64: 0x8c628304  lw          $v0, -0x7CFC($v1)
    ctx->pc = 0x10fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338304u));
    // 0x10fe68: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x10FE68u;
    {
        const bool branch_taken_0x10fe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE68u;
        // 0x10fe6c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe68) {
            ctx->pc = 0x1104C8u;
            goto label_1104c8;
        }
    }
    ctx->pc = 0x10FE70u;
    // 0x10fe70: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fe74: 0xac7e8304  sw          $fp, -0x7CFC($v1)
    ctx->pc = 0x10fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935300), GPR_U32(ctx, 30));
    // 0x10fe78: 0x24a5a3a0  addiu       $a1, $a1, -0x5C60
    ctx->pc = 0x10fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943648));
    // 0x10fe7c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10fe80: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x10fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x10fe84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe88: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FE88u;
    SET_GPR_U32(ctx, 31, 0x10FE90u);
    ctx->pc = 0x10FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE88u;
    // 0x10fe8c: 0x27d00038  addiu       $s0, $fp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FE88u, 0x10FE90u)) {
        return;
    }
    ctx->pc = 0x10FE90u;
label_10fe90:
    // 0x10fe90: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fe94: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10fe98: 0x24844398  addiu       $a0, $a0, 0x4398
    ctx->pc = 0x10fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17304));
    // 0x10fe9c: 0x24a5a3b0  addiu       $a1, $a1, -0x5C50
    ctx->pc = 0x10fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943664));
    // 0x10fea0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FEA0u;
    SET_GPR_U32(ctx, 31, 0x10FEA8u);
    ctx->pc = 0x10FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEA0u;
    // 0x10fea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FEA0u, 0x10FEA8u)) {
        return;
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10feac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10feacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10feb0: 0x248443a0  addiu       $a0, $a0, 0x43A0
    ctx->pc = 0x10feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17312));
    // 0x10feb4: 0x24a5a3c8  addiu       $a1, $a1, -0x5C38
    ctx->pc = 0x10feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943688));
    // 0x10feb8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FEB8u;
    SET_GPR_U32(ctx, 31, 0x10FEC0u);
    ctx->pc = 0x10FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEB8u;
    // 0x10febc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FEB8u, 0x10FEC0u)) {
        return;
    }
    ctx->pc = 0x10FEC0u;
label_10fec0:
    // 0x10fec0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fec4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10fec8: 0x248443a8  addiu       $a0, $a0, 0x43A8
    ctx->pc = 0x10fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17320));
    // 0x10fecc: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20
    ctx->pc = 0x10feccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
    // 0x10fed0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FED0u;
    SET_GPR_U32(ctx, 31, 0x10FED8u);
    ctx->pc = 0x10FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FED0u;
    // 0x10fed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FED0u, 0x10FED8u)) {
        return;
    }
    ctx->pc = 0x10FED8u;
label_10fed8:
    // 0x10fed8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fedc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10fee0: 0x248443b0  addiu       $a0, $a0, 0x43B0
    ctx->pc = 0x10fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17328));
    // 0x10fee4: 0x24a5a3f8  addiu       $a1, $a1, -0x5C08
    ctx->pc = 0x10fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943736));
    // 0x10fee8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FEE8u;
    SET_GPR_U32(ctx, 31, 0x10FEF0u);
    ctx->pc = 0x10FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEE8u;
    // 0x10feec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FEE8u, 0x10FEF0u)) {
        return;
    }
    ctx->pc = 0x10FEF0u;
label_10fef0:
    // 0x10fef0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fef4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10fef8: 0x248443b8  addiu       $a0, $a0, 0x43B8
    ctx->pc = 0x10fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    // 0x10fefc: 0x24a5a410  addiu       $a1, $a1, -0x5BF0
    ctx->pc = 0x10fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943760));
    // 0x10ff00: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF00u;
    SET_GPR_U32(ctx, 31, 0x10FF08u);
    ctx->pc = 0x10FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF00u;
    // 0x10ff04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF00u, 0x10FF08u)) {
        return;
    }
    ctx->pc = 0x10FF08u;
label_10ff08:
    // 0x10ff08: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff0c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff10: 0x248443c0  addiu       $a0, $a0, 0x43C0
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
    // 0x10ff14: 0x24a5a420  addiu       $a1, $a1, -0x5BE0
    ctx->pc = 0x10ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943776));
    // 0x10ff18: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF18u;
    SET_GPR_U32(ctx, 31, 0x10FF20u);
    ctx->pc = 0x10FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF18u;
    // 0x10ff1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF18u, 0x10FF20u)) {
        return;
    }
    ctx->pc = 0x10FF20u;
label_10ff20:
    // 0x10ff20: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff24: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff28: 0x248443c8  addiu       $a0, $a0, 0x43C8
    ctx->pc = 0x10ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17352));
    // 0x10ff2c: 0x24a5a430  addiu       $a1, $a1, -0x5BD0
    ctx->pc = 0x10ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943792));
    // 0x10ff30: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF30u;
    SET_GPR_U32(ctx, 31, 0x10FF38u);
    ctx->pc = 0x10FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF30u;
    // 0x10ff34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF30u, 0x10FF38u)) {
        return;
    }
    ctx->pc = 0x10FF38u;
label_10ff38:
    // 0x10ff38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff3c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff40: 0x248443d0  addiu       $a0, $a0, 0x43D0
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    // 0x10ff44: 0x24a5a448  addiu       $a1, $a1, -0x5BB8
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943816));
    // 0x10ff48: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF48u;
    SET_GPR_U32(ctx, 31, 0x10FF50u);
    ctx->pc = 0x10FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF48u;
    // 0x10ff4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF48u, 0x10FF50u)) {
        return;
    }
    ctx->pc = 0x10FF50u;
label_10ff50:
    // 0x10ff50: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff54: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff58: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x10ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x10ff5c: 0x24a5a458  addiu       $a1, $a1, -0x5BA8
    ctx->pc = 0x10ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943832));
    // 0x10ff60: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF60u;
    SET_GPR_U32(ctx, 31, 0x10FF68u);
    ctx->pc = 0x10FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF60u;
    // 0x10ff64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF60u, 0x10FF68u)) {
        return;
    }
    ctx->pc = 0x10FF68u;
label_10ff68:
    // 0x10ff68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff70: 0x248443e0  addiu       $a0, $a0, 0x43E0
    ctx->pc = 0x10ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17376));
    // 0x10ff74: 0x24a5a470  addiu       $a1, $a1, -0x5B90
    ctx->pc = 0x10ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943856));
    // 0x10ff78: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF78u;
    SET_GPR_U32(ctx, 31, 0x10FF80u);
    ctx->pc = 0x10FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF78u;
    // 0x10ff7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF78u, 0x10FF80u)) {
        return;
    }
    ctx->pc = 0x10FF80u;
label_10ff80:
    // 0x10ff80: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ff88: 0x248443e8  addiu       $a0, $a0, 0x43E8
    ctx->pc = 0x10ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17384));
    // 0x10ff8c: 0x24a5a480  addiu       $a1, $a1, -0x5B80
    ctx->pc = 0x10ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943872));
    // 0x10ff90: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FF90u;
    SET_GPR_U32(ctx, 31, 0x10FF98u);
    ctx->pc = 0x10FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF90u;
    // 0x10ff94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FF90u, 0x10FF98u)) {
        return;
    }
    ctx->pc = 0x10FF98u;
label_10ff98:
    // 0x10ff98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ff9c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ffa0: 0x248443f0  addiu       $a0, $a0, 0x43F0
    ctx->pc = 0x10ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    // 0x10ffa4: 0x24a5a490  addiu       $a1, $a1, -0x5B70
    ctx->pc = 0x10ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943888));
    // 0x10ffa8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FFA8u;
    SET_GPR_U32(ctx, 31, 0x10FFB0u);
    ctx->pc = 0x10FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFA8u;
    // 0x10ffac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FFA8u, 0x10FFB0u)) {
        return;
    }
    ctx->pc = 0x10FFB0u;
label_10ffb0:
    // 0x10ffb0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ffb4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ffb8: 0x248443f8  addiu       $a0, $a0, 0x43F8
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    // 0x10ffbc: 0x24a5a4a8  addiu       $a1, $a1, -0x5B58
    ctx->pc = 0x10ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943912));
    // 0x10ffc0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FFC0u;
    SET_GPR_U32(ctx, 31, 0x10FFC8u);
    ctx->pc = 0x10FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFC0u;
    // 0x10ffc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FFC0u, 0x10FFC8u)) {
        return;
    }
    ctx->pc = 0x10FFC8u;
label_10ffc8:
    // 0x10ffc8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ffcc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ffd0: 0x24844400  addiu       $a0, $a0, 0x4400
    ctx->pc = 0x10ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    // 0x10ffd4: 0x24a5a4b8  addiu       $a1, $a1, -0x5B48
    ctx->pc = 0x10ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943928));
    // 0x10ffd8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FFD8u;
    SET_GPR_U32(ctx, 31, 0x10FFE0u);
    ctx->pc = 0x10FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFD8u;
    // 0x10ffdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FFD8u, 0x10FFE0u)) {
        return;
    }
    ctx->pc = 0x10FFE0u;
label_10ffe0:
    // 0x10ffe0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10ffe4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ffe8: 0x24844408  addiu       $a0, $a0, 0x4408
    ctx->pc = 0x10ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
    // 0x10ffec: 0x24a5a4d0  addiu       $a1, $a1, -0x5B30
    ctx->pc = 0x10ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943952));
    // 0x10fff0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FFF0u;
    SET_GPR_U32(ctx, 31, 0x10FFF8u);
    ctx->pc = 0x10FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FFF0u;
    // 0x10fff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FFF0u, 0x10FFF8u)) {
        return;
    }
    ctx->pc = 0x10FFF8u;
label_10fff8:
    // 0x10fff8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fffc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110000: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x110000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    // 0x110004: 0x24a5a4e8  addiu       $a1, $a1, -0x5B18
    ctx->pc = 0x110004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943976));
    // 0x110008: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110008u;
    SET_GPR_U32(ctx, 31, 0x110010u);
    ctx->pc = 0x11000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110008u;
    // 0x11000c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110008u, 0x110010u)) {
        return;
    }
    ctx->pc = 0x110010u;
label_110010:
    // 0x110010: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110014: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110018: 0x24844418  addiu       $a0, $a0, 0x4418
    ctx->pc = 0x110018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
    // 0x11001c: 0x24a5a500  addiu       $a1, $a1, -0x5B00
    ctx->pc = 0x11001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944000));
    // 0x110020: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110020u;
    SET_GPR_U32(ctx, 31, 0x110028u);
    ctx->pc = 0x110024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110020u;
    // 0x110024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110020u, 0x110028u)) {
        return;
    }
    ctx->pc = 0x110028u;
label_110028:
    // 0x110028: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11002c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11002cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110030: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x110034: 0x24a5a518  addiu       $a1, $a1, -0x5AE8
    ctx->pc = 0x110034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944024));
    // 0x110038: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110038u;
    SET_GPR_U32(ctx, 31, 0x110040u);
    ctx->pc = 0x11003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110038u;
    // 0x11003c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110038u, 0x110040u)) {
        return;
    }
    ctx->pc = 0x110040u;
label_110040:
    // 0x110040: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110044: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110048: 0x24844428  addiu       $a0, $a0, 0x4428
    ctx->pc = 0x110048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
    // 0x11004c: 0x24a5a538  addiu       $a1, $a1, -0x5AC8
    ctx->pc = 0x11004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944056));
    // 0x110050: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110050u;
    SET_GPR_U32(ctx, 31, 0x110058u);
    ctx->pc = 0x110054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110050u;
    // 0x110054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110050u, 0x110058u)) {
        return;
    }
    ctx->pc = 0x110058u;
label_110058:
    // 0x110058: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11005c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11005cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110060: 0x24844430  addiu       $a0, $a0, 0x4430
    ctx->pc = 0x110060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    // 0x110064: 0x24a5a548  addiu       $a1, $a1, -0x5AB8
    ctx->pc = 0x110064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944072));
    // 0x110068: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110068u;
    SET_GPR_U32(ctx, 31, 0x110070u);
    ctx->pc = 0x11006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110068u;
    // 0x11006c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110068u, 0x110070u)) {
        return;
    }
    ctx->pc = 0x110070u;
label_110070:
    // 0x110070: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110074: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x110074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110078: 0x24844438  addiu       $a0, $a0, 0x4438
    ctx->pc = 0x110078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
    // 0x11007c: 0x24a5a558  addiu       $a1, $a1, -0x5AA8
    ctx->pc = 0x11007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944088));
    // 0x110080: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110080u;
    SET_GPR_U32(ctx, 31, 0x110088u);
    ctx->pc = 0x110084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110080u;
    // 0x110084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110080u, 0x110088u)) {
        return;
    }
    ctx->pc = 0x110088u;
label_110088:
    // 0x110088: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11008c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11008cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x110090: 0x24844440  addiu       $a0, $a0, 0x4440
    ctx->pc = 0x110090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    // 0x110094: 0x24a5a568  addiu       $a1, $a1, -0x5A98
    ctx->pc = 0x110094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944104));
    // 0x110098: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110098u;
    SET_GPR_U32(ctx, 31, 0x1100A0u);
    ctx->pc = 0x11009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110098u;
    // 0x11009c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110098u, 0x1100A0u)) {
        return;
    }
    ctx->pc = 0x1100A0u;
label_1100a0:
    // 0x1100a0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1100a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1100a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1100a8: 0x24844448  addiu       $a0, $a0, 0x4448
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
    // 0x1100ac: 0x24a5a578  addiu       $a1, $a1, -0x5A88
    ctx->pc = 0x1100acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944120));
    // 0x1100b0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1100B0u;
    SET_GPR_U32(ctx, 31, 0x1100B8u);
    ctx->pc = 0x1100B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100B0u;
    // 0x1100b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1100B0u, 0x1100B8u)) {
        return;
    }
    ctx->pc = 0x1100B8u;
label_1100b8:
    // 0x1100b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1100b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1100bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1100bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1100c0: 0x24844450  addiu       $a0, $a0, 0x4450
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    // 0x1100c4: 0x24a5a588  addiu       $a1, $a1, -0x5A78
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944136));
    // 0x1100c8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1100C8u;
    SET_GPR_U32(ctx, 31, 0x1100D0u);
    ctx->pc = 0x1100CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100C8u;
    // 0x1100cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1100C8u, 0x1100D0u)) {
        return;
    }
    ctx->pc = 0x1100D0u;
label_1100d0:
    // 0x1100d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1100d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1100d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1100d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1100d8: 0x24844458  addiu       $a0, $a0, 0x4458
    ctx->pc = 0x1100d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    // 0x1100dc: 0x24a5a598  addiu       $a1, $a1, -0x5A68
    ctx->pc = 0x1100dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944152));
    // 0x1100e0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1100E0u;
    SET_GPR_U32(ctx, 31, 0x1100E8u);
    ctx->pc = 0x1100E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100E0u;
    // 0x1100e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1100E0u, 0x1100E8u)) {
        return;
    }
    ctx->pc = 0x1100E8u;
label_1100e8:
    // 0x1100e8: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x1100e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x1100ec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1100ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1100f0: 0x26f74460  addiu       $s7, $s7, 0x4460
    ctx->pc = 0x1100f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 17504));
    // 0x1100f4: 0x24a5a5a8  addiu       $a1, $a1, -0x5A58
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944168));
    // 0x1100f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1100f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100fc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1100FCu;
    SET_GPR_U32(ctx, 31, 0x110104u);
    ctx->pc = 0x110100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100FCu;
    // 0x110100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1100FCu, 0x110104u)) {
        return;
    }
    ctx->pc = 0x110104u;
label_110104:
    // 0x110104: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x110104u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x110108: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11010c: 0x26d64468  addiu       $s6, $s6, 0x4468
    ctx->pc = 0x11010cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17512));
    // 0x110110: 0x24a5a5b8  addiu       $a1, $a1, -0x5A48
    ctx->pc = 0x110110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944184));
    // 0x110114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x110114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110118: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110118u;
    SET_GPR_U32(ctx, 31, 0x110120u);
    ctx->pc = 0x11011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110118u;
    // 0x11011c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110118u, 0x110120u)) {
        return;
    }
    ctx->pc = 0x110120u;
label_110120:
    // 0x110120: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x110120u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x110124: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110128: 0x26b54470  addiu       $s5, $s5, 0x4470
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17520));
    // 0x11012c: 0x24a5a5c8  addiu       $a1, $a1, -0x5A38
    ctx->pc = 0x11012cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944200));
    // 0x110130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110134: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110134u;
    SET_GPR_U32(ctx, 31, 0x11013Cu);
    ctx->pc = 0x110138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110134u;
    // 0x110138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110134u, 0x11013Cu)) {
        return;
    }
    ctx->pc = 0x11013Cu;
label_11013c:
    // 0x11013c: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x11013cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x110140: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110144: 0x26944478  addiu       $s4, $s4, 0x4478
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17528));
    // 0x110148: 0x24a5a5e0  addiu       $a1, $a1, -0x5A20
    ctx->pc = 0x110148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944224));
    // 0x11014c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110150: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110150u;
    SET_GPR_U32(ctx, 31, 0x110158u);
    ctx->pc = 0x110154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110150u;
    // 0x110154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110150u, 0x110158u)) {
        return;
    }
    ctx->pc = 0x110158u;
label_110158:
    // 0x110158: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x110158u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x11015c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11015cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110160: 0x26734480  addiu       $s3, $s3, 0x4480
    ctx->pc = 0x110160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17536));
    // 0x110164: 0x24a5a5f0  addiu       $a1, $a1, -0x5A10
    ctx->pc = 0x110164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944240));
    // 0x110168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11016c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x11016Cu;
    SET_GPR_U32(ctx, 31, 0x110174u);
    ctx->pc = 0x110170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11016Cu;
    // 0x110170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x11016Cu, 0x110174u)) {
        return;
    }
    ctx->pc = 0x110174u;
label_110174:
    // 0x110174: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x110174u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x110178: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11017c: 0x26524488  addiu       $s2, $s2, 0x4488
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17544));
    // 0x110180: 0x24a5a600  addiu       $a1, $a1, -0x5A00
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944256));
    // 0x110184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110188: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x110188u;
    SET_GPR_U32(ctx, 31, 0x110190u);
    ctx->pc = 0x11018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110188u;
    // 0x11018c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x110188u, 0x110190u)) {
        return;
    }
    ctx->pc = 0x110190u;
label_110190:
    // 0x110190: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x110190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x110194: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x110194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x110198: 0x26314490  addiu       $s1, $s1, 0x4490
    ctx->pc = 0x110198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17552));
    // 0x11019c: 0x24a5a610  addiu       $a1, $a1, -0x59F0
    ctx->pc = 0x11019cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
    // 0x1101a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1101a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101a4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1101A4u;
    SET_GPR_U32(ctx, 31, 0x1101ACu);
    ctx->pc = 0x1101A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101A4u;
    // 0x1101a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1101A4u, 0x1101ACu)) {
        return;
    }
    ctx->pc = 0x1101ACu;
label_1101ac:
    // 0x1101ac: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1101acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1101b0: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x1101b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x1101b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1101b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101bc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1101BCu;
    SET_GPR_U32(ctx, 31, 0x1101C4u);
    ctx->pc = 0x1101C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101BCu;
    // 0x1101c0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1101BCu, 0x1101C4u)) {
        return;
    }
    ctx->pc = 0x1101C4u;
label_1101c4:
    // 0x1101c4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1101c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1101c8: 0x24a54398  addiu       $a1, $a1, 0x4398
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17304));
    // 0x1101cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1101d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1101D4u;
    SET_GPR_U32(ctx, 31, 0x1101DCu);
    ctx->pc = 0x1101D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101D4u;
    // 0x1101d8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1101D4u, 0x1101DCu)) {
        return;
    }
    ctx->pc = 0x1101DCu;
label_1101dc:
    // 0x1101dc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1101dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1101e0: 0x24a543a0  addiu       $a1, $a1, 0x43A0
    ctx->pc = 0x1101e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17312));
    // 0x1101e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1101ECu;
    SET_GPR_U32(ctx, 31, 0x1101F4u);
    ctx->pc = 0x1101F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101ECu;
    // 0x1101f0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1101ECu, 0x1101F4u)) {
        return;
    }
    ctx->pc = 0x1101F4u;
label_1101f4:
    // 0x1101f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1101f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1101f8: 0x24a543a8  addiu       $a1, $a1, 0x43A8
    ctx->pc = 0x1101f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17320));
    // 0x1101fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110204: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110204u;
    SET_GPR_U32(ctx, 31, 0x11020Cu);
    ctx->pc = 0x110208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110204u;
    // 0x110208: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110204u, 0x11020Cu)) {
        return;
    }
    ctx->pc = 0x11020Cu;
label_11020c:
    // 0x11020c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11020cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110210: 0x24a543b0  addiu       $a1, $a1, 0x43B0
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
    // 0x110214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11021c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11021Cu;
    SET_GPR_U32(ctx, 31, 0x110224u);
    ctx->pc = 0x110220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11021Cu;
    // 0x110220: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11021Cu, 0x110224u)) {
        return;
    }
    ctx->pc = 0x110224u;
label_110224:
    // 0x110224: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110228: 0x24a543b8  addiu       $a1, $a1, 0x43B8
    ctx->pc = 0x110228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17336));
    // 0x11022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110234: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110234u;
    SET_GPR_U32(ctx, 31, 0x11023Cu);
    ctx->pc = 0x110238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110234u;
    // 0x110238: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110234u, 0x11023Cu)) {
        return;
    }
    ctx->pc = 0x11023Cu;
label_11023c:
    // 0x11023c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11023cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110240: 0x24a543c0  addiu       $a1, $a1, 0x43C0
    ctx->pc = 0x110240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17344));
    // 0x110244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11024c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11024Cu;
    SET_GPR_U32(ctx, 31, 0x110254u);
    ctx->pc = 0x110250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11024Cu;
    // 0x110250: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11024Cu, 0x110254u)) {
        return;
    }
    ctx->pc = 0x110254u;
label_110254:
    // 0x110254: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110258: 0x24a543c8  addiu       $a1, $a1, 0x43C8
    ctx->pc = 0x110258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17352));
    // 0x11025c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110264: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110264u;
    SET_GPR_U32(ctx, 31, 0x11026Cu);
    ctx->pc = 0x110268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110264u;
    // 0x110268: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110264u, 0x11026Cu)) {
        return;
    }
    ctx->pc = 0x11026Cu;
label_11026c:
    // 0x11026c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110270: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x110270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
    // 0x110274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11027c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11027Cu;
    SET_GPR_U32(ctx, 31, 0x110284u);
    ctx->pc = 0x110280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11027Cu;
    // 0x110280: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11027Cu, 0x110284u)) {
        return;
    }
    ctx->pc = 0x110284u;
label_110284:
    // 0x110284: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110288: 0x24a543d8  addiu       $a1, $a1, 0x43D8
    ctx->pc = 0x110288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17368));
    // 0x11028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110294: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110294u;
    SET_GPR_U32(ctx, 31, 0x11029Cu);
    ctx->pc = 0x110298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110294u;
    // 0x110298: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110294u, 0x11029Cu)) {
        return;
    }
    ctx->pc = 0x11029Cu;
label_11029c:
    // 0x11029c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11029cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1102a0: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x1102a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
    // 0x1102a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1102a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102ac: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1102ACu;
    SET_GPR_U32(ctx, 31, 0x1102B4u);
    ctx->pc = 0x1102B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102ACu;
    // 0x1102b0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1102ACu, 0x1102B4u)) {
        return;
    }
    ctx->pc = 0x1102B4u;
label_1102b4:
    // 0x1102b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1102b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1102b8: 0x24a543e8  addiu       $a1, $a1, 0x43E8
    ctx->pc = 0x1102b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17384));
    // 0x1102bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1102c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1102C4u;
    SET_GPR_U32(ctx, 31, 0x1102CCu);
    ctx->pc = 0x1102C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102C4u;
    // 0x1102c8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1102C4u, 0x1102CCu)) {
        return;
    }
    ctx->pc = 0x1102CCu;
label_1102cc:
    // 0x1102cc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1102ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1102d0: 0x24a543f0  addiu       $a1, $a1, 0x43F0
    ctx->pc = 0x1102d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17392));
    // 0x1102d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1102d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102dc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1102DCu;
    SET_GPR_U32(ctx, 31, 0x1102E4u);
    ctx->pc = 0x1102E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102DCu;
    // 0x1102e0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1102DCu, 0x1102E4u)) {
        return;
    }
    ctx->pc = 0x1102E4u;
label_1102e4:
    // 0x1102e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1102e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1102e8: 0x24a543f8  addiu       $a1, $a1, 0x43F8
    ctx->pc = 0x1102e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17400));
    // 0x1102ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1102f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1102F4u;
    SET_GPR_U32(ctx, 31, 0x1102FCu);
    ctx->pc = 0x1102F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102F4u;
    // 0x1102f8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1102F4u, 0x1102FCu)) {
        return;
    }
    ctx->pc = 0x1102FCu;
label_1102fc:
    // 0x1102fc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1102fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110300: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x110300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
    // 0x110304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11030c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11030Cu;
    SET_GPR_U32(ctx, 31, 0x110314u);
    ctx->pc = 0x110310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11030Cu;
    // 0x110310: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11030Cu, 0x110314u)) {
        return;
    }
    ctx->pc = 0x110314u;
label_110314:
    // 0x110314: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110318: 0x24a54408  addiu       $a1, $a1, 0x4408
    ctx->pc = 0x110318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17416));
    // 0x11031c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110324: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110324u;
    SET_GPR_U32(ctx, 31, 0x11032Cu);
    ctx->pc = 0x110328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110324u;
    // 0x110328: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110324u, 0x11032Cu)) {
        return;
    }
    ctx->pc = 0x11032Cu;
label_11032c:
    // 0x11032c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11032cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110330: 0x24a54410  addiu       $a1, $a1, 0x4410
    ctx->pc = 0x110330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17424));
    // 0x110334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11033c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11033Cu;
    SET_GPR_U32(ctx, 31, 0x110344u);
    ctx->pc = 0x110340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11033Cu;
    // 0x110340: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11033Cu, 0x110344u)) {
        return;
    }
    ctx->pc = 0x110344u;
label_110344:
    // 0x110344: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110348: 0x24a54418  addiu       $a1, $a1, 0x4418
    ctx->pc = 0x110348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17432));
    // 0x11034c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110354: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110354u;
    SET_GPR_U32(ctx, 31, 0x11035Cu);
    ctx->pc = 0x110358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110354u;
    // 0x110358: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110354u, 0x11035Cu)) {
        return;
    }
    ctx->pc = 0x11035Cu;
label_11035c:
    // 0x11035c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110360: 0x24a54420  addiu       $a1, $a1, 0x4420
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17440));
    // 0x110364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11036c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11036Cu;
    SET_GPR_U32(ctx, 31, 0x110374u);
    ctx->pc = 0x110370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11036Cu;
    // 0x110370: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11036Cu, 0x110374u)) {
        return;
    }
    ctx->pc = 0x110374u;
label_110374:
    // 0x110374: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110378: 0x24a54428  addiu       $a1, $a1, 0x4428
    ctx->pc = 0x110378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17448));
    // 0x11037c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110384: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110384u;
    SET_GPR_U32(ctx, 31, 0x11038Cu);
    ctx->pc = 0x110388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110384u;
    // 0x110388: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110384u, 0x11038Cu)) {
        return;
    }
    ctx->pc = 0x11038Cu;
label_11038c:
    // 0x11038c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110390: 0x24a54430  addiu       $a1, $a1, 0x4430
    ctx->pc = 0x110390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17456));
    // 0x110394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11039c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11039Cu;
    SET_GPR_U32(ctx, 31, 0x1103A4u);
    ctx->pc = 0x1103A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11039Cu;
    // 0x1103a0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11039Cu, 0x1103A4u)) {
        return;
    }
    ctx->pc = 0x1103A4u;
label_1103a4:
    // 0x1103a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1103a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1103a8: 0x24a54438  addiu       $a1, $a1, 0x4438
    ctx->pc = 0x1103a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
    // 0x1103ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1103acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1103b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103b4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1103B4u;
    SET_GPR_U32(ctx, 31, 0x1103BCu);
    ctx->pc = 0x1103B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103B4u;
    // 0x1103b8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1103B4u, 0x1103BCu)) {
        return;
    }
    ctx->pc = 0x1103BCu;
label_1103bc:
    // 0x1103bc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1103bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1103c0: 0x24a54440  addiu       $a1, $a1, 0x4440
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17472));
    // 0x1103c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1103c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1103c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103cc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1103CCu;
    SET_GPR_U32(ctx, 31, 0x1103D4u);
    ctx->pc = 0x1103D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103CCu;
    // 0x1103d0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1103CCu, 0x1103D4u)) {
        return;
    }
    ctx->pc = 0x1103D4u;
label_1103d4:
    // 0x1103d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1103d8: 0x24a54448  addiu       $a1, $a1, 0x4448
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17480));
    // 0x1103dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1103dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1103e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103e4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1103E4u;
    SET_GPR_U32(ctx, 31, 0x1103ECu);
    ctx->pc = 0x1103E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103E4u;
    // 0x1103e8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1103E4u, 0x1103ECu)) {
        return;
    }
    ctx->pc = 0x1103ECu;
label_1103ec:
    // 0x1103ec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1103ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1103f0: 0x24a54450  addiu       $a1, $a1, 0x4450
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17488));
    // 0x1103f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1103f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1103f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103fc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1103FCu;
    SET_GPR_U32(ctx, 31, 0x110404u);
    ctx->pc = 0x110400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103FCu;
    // 0x110400: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1103FCu, 0x110404u)) {
        return;
    }
    ctx->pc = 0x110404u;
label_110404:
    // 0x110404: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x110404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x110408: 0x24a54458  addiu       $a1, $a1, 0x4458
    ctx->pc = 0x110408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    // 0x11040c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110414: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110414u;
    SET_GPR_U32(ctx, 31, 0x11041Cu);
    ctx->pc = 0x110418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110414u;
    // 0x110418: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110414u, 0x11041Cu)) {
        return;
    }
    ctx->pc = 0x11041Cu;
label_11041c:
    // 0x11041c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x11041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110428: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110428u;
    SET_GPR_U32(ctx, 31, 0x110430u);
    ctx->pc = 0x11042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110428u;
    // 0x11042c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110428u, 0x110430u)) {
        return;
    }
    ctx->pc = 0x110430u;
label_110430:
    // 0x110430: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x110430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11043c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11043Cu;
    SET_GPR_U32(ctx, 31, 0x110444u);
    ctx->pc = 0x110440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11043Cu;
    // 0x110440: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11043Cu, 0x110444u)) {
        return;
    }
    ctx->pc = 0x110444u;
label_110444:
    // 0x110444: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x110444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11044c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11044cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110450: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110450u;
    SET_GPR_U32(ctx, 31, 0x110458u);
    ctx->pc = 0x110454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110450u;
    // 0x110454: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110450u, 0x110458u)) {
        return;
    }
    ctx->pc = 0x110458u;
label_110458:
    // 0x110458: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x110458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11045c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110464: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110464u;
    SET_GPR_U32(ctx, 31, 0x11046Cu);
    ctx->pc = 0x110468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110464u;
    // 0x110468: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110464u, 0x11046Cu)) {
        return;
    }
    ctx->pc = 0x11046Cu;
label_11046c:
    // 0x11046c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110478: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x110478u;
    SET_GPR_U32(ctx, 31, 0x110480u);
    ctx->pc = 0x11047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110478u;
    // 0x11047c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x110478u, 0x110480u)) {
        return;
    }
    ctx->pc = 0x110480u;
label_110480:
    // 0x110480: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11048c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11048Cu;
    SET_GPR_U32(ctx, 31, 0x110494u);
    ctx->pc = 0x110490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11048Cu;
    // 0x110490: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11048Cu, 0x110494u)) {
        return;
    }
    ctx->pc = 0x110494u;
label_110494:
    // 0x110494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x110494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11049c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1104A0u;
    SET_GPR_U32(ctx, 31, 0x1104A8u);
    ctx->pc = 0x1104A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104A0u;
    // 0x1104a4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1104A0u, 0x1104A8u)) {
        return;
    }
    ctx->pc = 0x1104A8u;
label_1104a8:
    // 0x1104a8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1104a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1104ac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1104acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1104b0: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x1104B0u;
    SET_GPR_U32(ctx, 31, 0x1104B8u);
    ctx->pc = 0x1104B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104B0u;
    // 0x1104b4: 0x24a5a620  addiu       $a1, $a1, -0x59E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x1104B0u, 0x1104B8u)) {
        return;
    }
    ctx->pc = 0x1104B8u;
label_1104b8:
    // 0x1104b8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1104bc: 0xc043c72  jal         func_10F1C8
    ctx->pc = 0x1104BCu;
    SET_GPR_U32(ctx, 31, 0x1104C4u);
    ctx->pc = 0x1104C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104BCu;
    // 0x1104c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1C8u, 0x1104BCu, 0x1104C4u)) {
        return;
    }
    ctx->pc = 0x1104C4u;
label_1104c4:
    // 0x1104c4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1104c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1104c8:
    // 0x1104c8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1104c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1104cc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1104ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1104d0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1104d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1104d4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1104d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1104d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1104d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1104dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1104dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1104e0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1104e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1104e4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1104e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1104e8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1104e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1104ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1104ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1104f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1104F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1104F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104F0u;
        // 0x1104f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1104F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1104F8u;
}
