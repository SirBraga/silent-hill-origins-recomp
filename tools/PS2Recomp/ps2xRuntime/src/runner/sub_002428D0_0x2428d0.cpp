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

// Function: sub_002428D0
// Address: 0x2428d0 - 0x242a38
void sub_002428D0_0x2428d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002428D0_0x2428d0");
#endif

    switch (ctx->pc) {
        case 0x2428f4u: goto label_2428f4;
        case 0x242a24u: goto label_242a24;
        default: break;
    }

    ctx->pc = 0x2428d0u;

    // 0x2428d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2428d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2428d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2428d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2428d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2428d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2428dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2428e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2428e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2428e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2428e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2428e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428ec: 0xc0908fe  jal         func_2423F8
    ctx->pc = 0x2428ECu;
    SET_GPR_U32(ctx, 31, 0x2428F4u);
    ctx->pc = 0x2428F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428ECu;
    // 0x2428f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2423F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2423F8u, 0x2428ECu, 0x2428F4u)) {
        return;
    }
    ctx->pc = 0x2428F4u;
label_2428f4:
    // 0x2428f4: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x2428F4u;
    {
        const bool branch_taken_0x2428f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2428f4) {
            ctx->pc = 0x2428F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2428F4u;
            // 0x2428f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242A28u;
            goto label_242a28;
        }
    }
    ctx->pc = 0x2428FCu;
    // 0x2428fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x242900: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x242900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x242904: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x242904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x242908: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x242908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x24290c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x24290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x242910: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x242910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x242914: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x242914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x242918: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x242918u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x24291c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24291cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x242920: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242924: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242924u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242928: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x242928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24292c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24292cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242930: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x242930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242934: 0x3403f811  ori         $v1, $zero, 0xF811
    ctx->pc = 0x242934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63505);
    // 0x242938: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x24293c: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x242940: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x242940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x242944: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x242944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x242948: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x242948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x24294c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x24294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x242950: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x242950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x242954: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x242954u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x242958: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242958u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24295c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x24295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242960: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242964: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242968: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x242968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24296c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24296cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x242970: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x242974: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242978: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24297c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x24297cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x242980: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x242980u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x242984: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x242984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x242988: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24298c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24298cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242990: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x242990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x242994: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x242994u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x242998: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x242998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x24299c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2429a0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2429a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2429a4: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x2429a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2429a8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2429a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2429ac: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2429acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2429b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2429b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2429b4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2429b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2429b8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2429b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2429bc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2429bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2429c0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2429c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2429c8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2429c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2429cc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2429ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2429d0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2429d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2429d4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2429d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2429d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2429dc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2429dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2429e0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2429e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2429e4: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x2429e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x2429e8: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x2429e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2429ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2429ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2429f0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2429f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2429f4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x2429f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2429f8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2429f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x2429fc: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x2429fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x242a00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242a04: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242a08: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x242a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x242a0c: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x242a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    // 0x242a10: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x242a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x242a14: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x242a14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0FE0u));
    // 0x242a18: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x242a18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x242a1c: 0xc0908e0  jal         func_242380
    ctx->pc = 0x242A1Cu;
    SET_GPR_U32(ctx, 31, 0x242A24u);
    ctx->pc = 0x242A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A1Cu;
    // 0x242a20: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x242A1Cu, 0x242A24u)) {
        return;
    }
    ctx->pc = 0x242A24u;
label_242a24:
    // 0x242a24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242a28:
    // 0x242a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242a30: 0x3e00008  jr          $ra
    ctx->pc = 0x242A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A30u;
        // 0x242a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A38u;
}
