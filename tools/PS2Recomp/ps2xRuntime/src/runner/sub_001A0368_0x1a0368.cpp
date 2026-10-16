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

// Function: sub_001A0368
// Address: 0x1a0368 - 0x1a04c8
void sub_001A0368_0x1a0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0368_0x1a0368");
#endif

    switch (ctx->pc) {
        case 0x1a0368u: goto label_1a0368;
        case 0x1a036cu: goto label_1a036c;
        case 0x1a0370u: goto label_1a0370;
        case 0x1a0374u: goto label_1a0374;
        case 0x1a0378u: goto label_1a0378;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a0380u: goto label_1a0380;
        case 0x1a0384u: goto label_1a0384;
        case 0x1a0388u: goto label_1a0388;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a0390u: goto label_1a0390;
        case 0x1a0394u: goto label_1a0394;
        case 0x1a0398u: goto label_1a0398;
        case 0x1a039cu: goto label_1a039c;
        case 0x1a03a0u: goto label_1a03a0;
        case 0x1a03a4u: goto label_1a03a4;
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03acu: goto label_1a03ac;
        case 0x1a03b0u: goto label_1a03b0;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03bcu: goto label_1a03bc;
        case 0x1a03c0u: goto label_1a03c0;
        case 0x1a03c4u: goto label_1a03c4;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03ccu: goto label_1a03cc;
        case 0x1a03d0u: goto label_1a03d0;
        case 0x1a03d4u: goto label_1a03d4;
        case 0x1a03d8u: goto label_1a03d8;
        case 0x1a03dcu: goto label_1a03dc;
        case 0x1a03e0u: goto label_1a03e0;
        case 0x1a03e4u: goto label_1a03e4;
        case 0x1a03e8u: goto label_1a03e8;
        case 0x1a03ecu: goto label_1a03ec;
        case 0x1a03f0u: goto label_1a03f0;
        case 0x1a03f4u: goto label_1a03f4;
        case 0x1a03f8u: goto label_1a03f8;
        case 0x1a03fcu: goto label_1a03fc;
        case 0x1a0400u: goto label_1a0400;
        case 0x1a0404u: goto label_1a0404;
        case 0x1a0408u: goto label_1a0408;
        case 0x1a040cu: goto label_1a040c;
        case 0x1a0410u: goto label_1a0410;
        case 0x1a0414u: goto label_1a0414;
        case 0x1a0418u: goto label_1a0418;
        case 0x1a041cu: goto label_1a041c;
        case 0x1a0420u: goto label_1a0420;
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0428u: goto label_1a0428;
        case 0x1a042cu: goto label_1a042c;
        case 0x1a0430u: goto label_1a0430;
        case 0x1a0434u: goto label_1a0434;
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        default: break;
    }

    ctx->pc = 0x1a0368u;

label_1a0368:
    // 0x1a0368: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a036c:
    // 0x1a036c: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1a0370:
    // 0x1a0370: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1a0374:
    // 0x1a0374: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1a0374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1a0378:
    // 0x1a0378: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1a037c:
    // 0x1a037c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a037cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0380:
    // 0x1a0380: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1a0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1a0384:
    // 0x1a0384: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a0384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0388:
    // 0x1a0388: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a0388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1a038c:
    // 0x1a038c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1a038cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0390:
    // 0x1a0390: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a0390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1a0394:
    // 0x1a0394: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1a0398:
    // 0x1a0398: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a0398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1a039c:
    // 0x1a039c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1a039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1a03a0:
    // 0x1a03a0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1a03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1a03a4:
    // 0x1a03a4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1a03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1a03a8:
    // 0x1a03a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a03ac:
    // 0x1a03ac: 0x8ec40804  lw          $a0, 0x804($s6)
    ctx->pc = 0x1a03acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
label_1a03b0:
    // 0x1a03b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a03b4:
    // 0x1a03b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a03b8:
    // 0x1a03b8: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1a03bc:
    // 0x1a03bc: 0x18600035  blez        $v1, . + 4 + (0x35 << 2)
label_1a03c0:
    if (ctx->pc == 0x1A03C0u) {
        ctx->pc = 0x1A03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03BCu;
        // 0x1a03c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03C4u;
        goto label_1a03c4;
    }
    ctx->pc = 0x1A03BCu;
    {
        const bool branch_taken_0x1a03bc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03BCu;
        // 0x1a03c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03bc) {
            ctx->pc = 0x1A0494u;
            goto label_1a0494;
        }
    }
    ctx->pc = 0x1A03C4u;
label_1a03c4:
    // 0x1a03c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a03c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a03c8:
    // 0x1a03c8: 0x26740310  addiu       $s4, $s3, 0x310
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
label_1a03cc:
    // 0x1a03cc: 0x267e0044  addiu       $fp, $s3, 0x44
    ctx->pc = 0x1a03ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_1a03d0:
    // 0x1a03d0: 0x26d10870  addiu       $s1, $s6, 0x870
    ctx->pc = 0x1a03d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 2160));
label_1a03d4:
    // 0x1a03d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a03d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a03d8:
    // 0x1a03d8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1a03dc:
    // 0x1a03dc: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_1a03e0:
    if (ctx->pc == 0x1A03E0u) {
        ctx->pc = 0x1A03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03DCu;
        // 0x1a03e0: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03E4u;
        goto label_1a03e4;
    }
    ctx->pc = 0x1A03DCu;
    {
        const bool branch_taken_0x1a03dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03dc) {
            ctx->pc = 0x1A03E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A03DCu;
            // 0x1a03e0: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A03E4u;
label_1a03e4:
    // 0x1a03e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a03e8:
    // 0x1a03e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a03ec:
    // 0x1a03ec: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1a03f0:
    // 0x1a03f0: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1a03f4:
    // 0x1a03f4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1a03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a03f8:
    // 0x1a03f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a03f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a03fc:
    // 0x1a03fc: 0x0  nop
    ctx->pc = 0x1a03fcu;
    // NOP
label_1a0400:
    // 0x1a0400: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_1a0404:
    if (ctx->pc == 0x1A0404u) {
        ctx->pc = 0x1A0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0400u;
        // 0x1a0404: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0408u;
        goto label_1a0408;
    }
    ctx->pc = 0x1A0400u;
    {
        const bool branch_taken_0x1a0400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0400) {
            ctx->pc = 0x1A0404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0400u;
            // 0x1a0404: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A0408u;
label_1a0408:
    // 0x1a0408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a040c:
    // 0x1a040c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1a040cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a0410:
    // 0x1a0410: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1a0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a0414:
    // 0x1a0414: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1a0418:
    if (ctx->pc == 0x1A0418u) {
        ctx->pc = 0x1A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0414u;
        // 0x1a0418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A041Cu;
        goto label_1a041c;
    }
    ctx->pc = 0x1A0414u;
    {
        const bool branch_taken_0x1a0414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0414u;
        // 0x1a0418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0414) {
            ctx->pc = 0x1A0448u;
            goto label_1a0448;
        }
    }
    ctx->pc = 0x1A041Cu;
label_1a041c:
    // 0x1a041c: 0xc043ce6  jal         func_10F398
label_1a0420:
    if (ctx->pc == 0x1A0420u) {
        ctx->pc = 0x1A0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A041Cu;
        // 0x1a0420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0424u;
        goto label_1a0424;
    }
    ctx->pc = 0x1A041Cu;
    SET_GPR_U32(ctx, 31, 0x1A0424u);
    ctx->pc = 0x1A0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A041Cu;
    // 0x1a0420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x1A041Cu, 0x1A0424u)) {
        return;
    }
    ctx->pc = 0x1A0424u;
label_1a0424:
    // 0x1a0424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0428:
    // 0x1a0428: 0xc04f0cc  jal         func_13C330
label_1a042c:
    if (ctx->pc == 0x1A042Cu) {
        ctx->pc = 0x1A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0428u;
        // 0x1a042c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0430u;
        goto label_1a0430;
    }
    ctx->pc = 0x1A0428u;
    SET_GPR_U32(ctx, 31, 0x1A0430u);
    ctx->pc = 0x1A042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0428u;
    // 0x1a042c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A0428u, 0x1A0430u)) {
        return;
    }
    ctx->pc = 0x1A0430u;
label_1a0430:
    // 0x1a0430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0434:
    // 0x1a0434: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0438:
    // 0x1a0438: 0xc043c7c  jal         func_10F1F0
label_1a043c:
    if (ctx->pc == 0x1A043Cu) {
        ctx->pc = 0x1A043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0438u;
        // 0x1a043c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0440u;
        goto label_1a0440;
    }
    ctx->pc = 0x1A0438u;
    SET_GPR_U32(ctx, 31, 0x1A0440u);
    ctx->pc = 0x1A043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0438u;
    // 0x1a043c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x1A0438u, 0x1A0440u)) {
        return;
    }
    ctx->pc = 0x1A0440u;
label_1a0440:
    // 0x1a0440: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a0444:
    if (ctx->pc == 0x1A0444u) {
        ctx->pc = 0x1A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0440u;
        // 0x1a0444: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0448u;
        goto label_1a0448;
    }
    ctx->pc = 0x1A0440u;
    {
        const bool branch_taken_0x1a0440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0440u;
        // 0x1a0444: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0440) {
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A0448u;
label_1a0448:
    // 0x1a0448: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1a044c:
    if (ctx->pc == 0x1A044Cu) {
        ctx->pc = 0x1A044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0448u;
        // 0x1a044c: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0450u;
        goto label_1a0450;
    }
    ctx->pc = 0x1A0448u;
    {
        const bool branch_taken_0x1a0448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0448) {
            ctx->pc = 0x1A044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0448u;
            // 0x1a044c: 0x8ec40804  lw          $a0, 0x804($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0474u;
            goto label_1a0474;
        }
    }
    ctx->pc = 0x1A0450u;
label_1a0450:
    // 0x1a0450: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1a0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1a0454:
    // 0x1a0454: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x1a0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a0458:
    // 0x1a0458: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1a045c:
    // 0x1a045c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1a0460:
    // 0x1a0460: 0xc4ad001c  lwc1        $f13, 0x1C($a1)
    ctx->pc = 0x1a0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a0464:
    // 0x1a0464: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_1a0468:
    // 0x1a0468: 0x60f809  jalr        $v1
label_1a046c:
    if (ctx->pc == 0x1A046Cu) {
        ctx->pc = 0x1A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0468u;
        // 0x1a046c: 0xc4ae0020  lwc1        $f14, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0470u;
        goto label_1a0470;
    }
    ctx->pc = 0x1A0468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0470u);
        ctx->pc = 0x1A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0468u;
        // 0x1a046c: 0xc4ae0020  lwc1        $f14, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0468u, 0x1A0470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0470u;
label_1a0470:
    // 0x1a0470: 0x8ec40804  lw          $a0, 0x804($s6)
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2052)));
label_1a0474:
    // 0x1a0474: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a0478:
    // 0x1a0478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a047c:
    // 0x1a047c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a0480:
    // 0x1a0480: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a0484:
    // 0x1a0484: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1a0488:
    // 0x1a0488: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1a0488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a048c:
    // 0x1a048c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_1a0490:
    if (ctx->pc == 0x1A0490u) {
        ctx->pc = 0x1A0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A048Cu;
        // 0x1a0490: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0494u;
        goto label_1a0494;
    }
    ctx->pc = 0x1A048Cu;
    {
        const bool branch_taken_0x1a048c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A048Cu;
        // 0x1a0490: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a048c) {
            ctx->pc = 0x1A03D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a03d8;
        }
    }
    ctx->pc = 0x1A0494u;
label_1a0494:
    // 0x1a0494: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a0494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a0498:
    // 0x1a0498: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a0498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a049c:
    // 0x1a049c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a049cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a04a0:
    // 0x1a04a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a04a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a04a4:
    // 0x1a04a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a04a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a04a8:
    // 0x1a04a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1a04a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a04ac:
    // 0x1a04ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1a04acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a04b0:
    // 0x1a04b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1a04b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a04b4:
    // 0x1a04b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1a04b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a04b8:
    // 0x1a04b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a04b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a04bc:
    // 0x1a04bc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a04c0:
    // 0x1a04c0: 0x3e00008  jr          $ra
label_1a04c4:
    if (ctx->pc == 0x1A04C4u) {
        ctx->pc = 0x1A04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04C0u;
        // 0x1a04c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04C8u;
        goto label_fallthrough_0x1a04c0;
    }
    ctx->pc = 0x1A04C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04C0u;
        // 0x1a04c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A04C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a04c0:
    ctx->pc = 0x1A04C8u;
}
