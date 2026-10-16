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

// Function: sub_00243108
// Address: 0x243108 - 0x243330
void sub_00243108_0x243108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243108_0x243108");
#endif

    switch (ctx->pc) {
        case 0x243140u: goto label_243140;
        case 0x243178u: goto label_243178;
        case 0x243210u: goto label_243210;
        case 0x2432f0u: goto label_2432f0;
        case 0x243300u: goto label_243300;
        default: break;
    }

    ctx->pc = 0x243108u;

    // 0x243108: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24310c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243110: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x243110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x243114: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x243114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x243118: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x243118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24311c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x243120: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x243120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x243124: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x243124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x243128: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x243128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24312c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x243130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x243130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243138: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x243138u;
    {
        const bool branch_taken_0x243138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243138u;
        // 0x24313c: 0x24540fe0  addiu       $s4, $v0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243138) {
            ctx->pc = 0x2432F0u;
            goto label_2432f0;
        }
    }
    ctx->pc = 0x243140u;
label_243140:
    // 0x243140: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x243140u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x243144: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x243144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x243148: 0x7a890000  lq          $t1, 0x0($s4)
    ctx->pc = 0x243148u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24314c: 0x24580f40  addiu       $t8, $v0, 0xF40
    ctx->pc = 0x24314cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x243150: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x243150u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x243154: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x243154u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243158: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x243158u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x24315c: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x24315cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
    // 0x243160: 0x340c8002  ori         $t4, $zero, 0x8002
    ctx->pc = 0x243160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x243164: 0xc65b8  dsll        $t4, $t4, 22
    ctx->pc = 0x243164u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 22);
    // 0x243168: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x243168u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x24316c: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x24316cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x243170: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x243170u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x243174: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x243174u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_243178:
    // 0x243178: 0x2d030011  sltiu       $v1, $t0, 0x11
    ctx->pc = 0x243178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24317c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x24317cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243180: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x243180u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8));
    // 0x243184: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x243184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x243188: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x243188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x24318c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x243190: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243194: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x243194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x243198: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x243198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24319c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x24319cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x2431a0: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x2431a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x2431a4: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x2431a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2431a8: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x2431a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2431ac: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2431acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2431b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2431b4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2431b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2431b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2431b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2431bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2431bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2431c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2431c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2431c4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2431c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2431c8: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x2431c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x2431cc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x2431ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2431d0: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x2431d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2431d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2431d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2431d8: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x2431d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x2431dc: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2431dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2431e0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2431e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2431e4: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x2431e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x2431e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2431e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2431ec: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2431ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2431f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2431f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2431f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2431f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2431f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2431f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2431fc: 0x10ca0032  beq         $a2, $t2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2431FCu;
    {
        const bool branch_taken_0x2431fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x243200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431FCu;
        // 0x243200: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431fc) {
            ctx->pc = 0x2432C8u;
            goto label_2432c8;
        }
    }
    ctx->pc = 0x243204u;
    // 0x243204: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x243204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x243208: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x243208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x24320c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x24320cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_243210:
    // 0x243210: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x243214: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x243214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243218: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x243218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x24321c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24321cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243220: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243224: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243228: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24322c: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x24322cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
    // 0x243230: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243234: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x243234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243238: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24323c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24323cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243240: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x243240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x243244: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x243244u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243248: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24324c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243250: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243254: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x243254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x243258: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x243258u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x24325c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x243260: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243264: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243268: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24326c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x24326cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x243270: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x243270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x243274: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243278: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24327c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x24327cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243280: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x243280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x243284: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243288: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24328c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24328cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243290: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x243294: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x243294u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243298: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x24329c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2432a0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2432a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2432a4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2432a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2432a8: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2432a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2432ac: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2432acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2432b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2432b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2432b4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2432b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2432b8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2432bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2432bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2432c0: 0x14c7ffd3  bne         $a2, $a3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2432C0u;
    {
        const bool branch_taken_0x2432c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2432C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432C0u;
        // 0x2432c4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432c0) {
            ctx->pc = 0x243210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243210;
        }
    }
    ctx->pc = 0x2432C8u;
label_2432c8:
    // 0x2432c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2432c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2432cc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2432d0: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2432d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x2432d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2432d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2432d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2432dc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2432dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2432e0: 0x1500ffa5  bnez        $t0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2432E0u;
    {
        const bool branch_taken_0x2432e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2432E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432E0u;
        // 0x2432e4: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432e0) {
            ctx->pc = 0x243178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243178;
        }
    }
    ctx->pc = 0x2432E8u;
    // 0x2432e8: 0xc0908e0  jal         func_242380
    ctx->pc = 0x2432E8u;
    SET_GPR_U32(ctx, 31, 0x2432F0u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x2432E8u, 0x2432F0u)) {
        return;
    }
    ctx->pc = 0x2432F0u;
label_2432f0:
    // 0x2432f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2432f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2432f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432f8: 0xc0908fe  jal         func_2423F8
    ctx->pc = 0x2432F8u;
    SET_GPR_U32(ctx, 31, 0x243300u);
    ctx->pc = 0x2432FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432F8u;
    // 0x2432fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2423F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2423F8u, 0x2432F8u, 0x243300u)) {
        return;
    }
    ctx->pc = 0x243300u;
label_243300:
    // 0x243300: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x243300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243304: 0x1500ff8e  bnez        $t0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x243304u;
    {
        const bool branch_taken_0x243304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243304u;
        // 0x243308: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243304) {
            ctx->pc = 0x243140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243140;
        }
    }
    ctx->pc = 0x24330Cu;
    // 0x24330c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24330cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243310: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x243310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243314: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x243314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243318: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x243318u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24331c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24331cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243324: 0x3e00008  jr          $ra
    ctx->pc = 0x243324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243324u;
        // 0x243328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24332Cu;
    // 0x24332c: 0x0  nop
    ctx->pc = 0x24332cu;
    // NOP
    ctx->pc = 0x243330u;
}
