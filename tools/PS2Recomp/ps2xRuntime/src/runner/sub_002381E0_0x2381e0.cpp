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

// Function: sub_002381E0
// Address: 0x2381e0 - 0x238390
void sub_002381E0_0x2381e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002381E0_0x2381e0");
#endif

    switch (ctx->pc) {
        case 0x2382d8u: goto label_2382d8;
        case 0x23835cu: goto label_23835c;
        case 0x238368u: goto label_238368;
        default: break;
    }

    ctx->pc = 0x2381e0u;

    // 0x2381e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2381e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2381e4: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x2381e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2381e8: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x2381e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x2381ec: 0x35298006  ori         $t1, $t1, 0x8006
    ctx->pc = 0x2381ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32774);
    // 0x2381f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2381f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2381f4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2381f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2381f8: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x2381f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2381fc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2381fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x238200: 0x72699b89  pcpyld      $s3, $s3, $t1
    ctx->pc = 0x238200u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 9)));
    // 0x238204: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x238204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x238208: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x238208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x23820c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x23820cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238210: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x238210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x238214: 0x2416003b  addiu       $s6, $zero, 0x3B
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x238218: 0x8c480d38  lw          $t0, 0xD38($v0)
    ctx->pc = 0x238218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3384)));
    // 0x23821c: 0x72c9b389  pcpyld      $s6, $s6, $t1
    ctx->pc = 0x23821cu;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 22), GPR_VEC(ctx, 9)));
    // 0x238220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x238220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238224: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238228: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23822c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x238230: 0x24120049  addiu       $s2, $zero, 0x49
    ctx->pc = 0x238230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x238234: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x238234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x238238: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x238238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23823c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x23823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x238240: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x238240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238244: 0x72509389  pcpyld      $s2, $s2, $s0
    ctx->pc = 0x238244u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x238248: 0x3409c0e2  ori         $t1, $zero, 0xC0E2
    ctx->pc = 0x238248u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49378);
    // 0x23824c: 0x94c78  dsll        $t1, $t1, 17
    ctx->pc = 0x23824cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 17);
    // 0x238250: 0x352990d5  ori         $t1, $t1, 0x90D5
    ctx->pc = 0x238250u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)37077);
    // 0x238254: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x238254u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x238258: 0x3529c580  ori         $t1, $t1, 0xC580
    ctx->pc = 0x238258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)50560);
    // 0x23825c: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x23825cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x238260: 0x35293524  ori         $t1, $t1, 0x3524
    ctx->pc = 0x238260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13604);
    // 0x238264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23826c: 0xaf8484ac  sw          $a0, -0x7B54($gp)
    ctx->pc = 0x23826cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935724), GPR_U32(ctx, 4));
    // 0x238270: 0x24110042  addiu       $s1, $zero, 0x42
    ctx->pc = 0x238270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x238274: 0xff858488  sd          $a1, -0x7B78($gp)
    ctx->pc = 0x238274u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U64(ctx, 5));
    // 0x238278: 0x24140044  addiu       $s4, $zero, 0x44
    ctx->pc = 0x238278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23827c: 0x24150046  addiu       $s5, $zero, 0x46
    ctx->pc = 0x23827cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x238280: 0x72288b89  pcpyld      $s1, $s1, $t0
    ctx->pc = 0x238280u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 8)));
    // 0x238284: 0x7289a389  pcpyld      $s4, $s4, $t1
    ctx->pc = 0x238284u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 9)));
    // 0x238288: 0x72a2ab89  pcpyld      $s5, $s5, $v0
    ctx->pc = 0x238288u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 2)));
    // 0x23828c: 0x70f08389  pcpyld      $s0, $a3, $s0
    ctx->pc = 0x23828cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x238290: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x238290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x238294: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238298: 0xac264140  sw          $a2, 0x4140($at)
    ctx->pc = 0x238298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B4140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4140u, _value); } while (0);
    // 0x23829c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2382a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382a4: 0xac233f24  sw          $v1, 0x3F24($at)
    ctx->pc = 0x2382a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F24u, _value); } while (0);
    // 0x2382a8: 0xaf8684a8  sw          $a2, -0x7B58($gp)
    ctx->pc = 0x2382a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935720), GPR_U32(ctx, 6));
    // 0x2382ac: 0xff888490  sd          $t0, -0x7B70($gp)
    ctx->pc = 0x2382acu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 8));
    // 0x2382b0: 0xff8784a0  sd          $a3, -0x7B60($gp)
    ctx->pc = 0x2382b0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 7));
    // 0x2382b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2382b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2382b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382bc: 0xac20413c  sw          $zero, 0x413C($at)
    ctx->pc = 0x2382bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B413Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B413Cu, _value); } while (0);
    // 0x2382c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382c4: 0xac204134  sw          $zero, 0x4134($at)
    ctx->pc = 0x2382c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x2382c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382cc: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x2382ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x2382d0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2382D0u;
    SET_GPR_U32(ctx, 31, 0x2382D8u);
    ctx->pc = 0x2382D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382D0u;
    // 0x2382d4: 0xff808480  sd          $zero, -0x7B80($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2382D0u, 0x2382D8u)) {
        return;
    }
    ctx->pc = 0x2382D8u;
label_2382d8:
    // 0x2382d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2382d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2382dc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x2382dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2382e0: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x2382e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x2382e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2382e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2382e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382ec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2382ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2382f0: 0x7c710000  sq          $s1, 0x0($v1)
    ctx->pc = 0x2382f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 17));
    // 0x2382f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2382f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2382f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2382fc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2382fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238300: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x238300u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x238304: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x238304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x238308: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23830c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23830cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238310: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x238310u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x238314: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x238314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x238318: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23831c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23831cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238320: 0x7c760030  sq          $s6, 0x30($v1)
    ctx->pc = 0x238320u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 22));
    // 0x238324: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x238324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x238328: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23832c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23832cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238330: 0x7c740040  sq          $s4, 0x40($v1)
    ctx->pc = 0x238330u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 20));
    // 0x238334: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x238338: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23833c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23833cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238340: 0x7c750050  sq          $s5, 0x50($v1)
    ctx->pc = 0x238340u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 21));
    // 0x238344: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x238344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x238348: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23834c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23834cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x238350: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238354: 0xc08c0ce  jal         func_230338
    ctx->pc = 0x238354u;
    SET_GPR_U32(ctx, 31, 0x23835Cu);
    ctx->pc = 0x238358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238354u;
    // 0x238358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230338u, 0x238354u, 0x23835Cu)) {
        return;
    }
    ctx->pc = 0x23835Cu;
label_23835c:
    // 0x23835c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238360: 0xc08c0ce  jal         func_230338
    ctx->pc = 0x238360u;
    SET_GPR_U32(ctx, 31, 0x238368u);
    ctx->pc = 0x238364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238360u;
    // 0x238364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230338u, 0x238360u, 0x238368u)) {
        return;
    }
    ctx->pc = 0x238368u;
label_238368:
    // 0x238368: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x238368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23836c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23836cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238370: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x238370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238374: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x238374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238378: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x238378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23837c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x23837cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238380: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x238380u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238388: 0x3e00008  jr          $ra
    ctx->pc = 0x238388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238388u;
        // 0x23838c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238390u;
}
