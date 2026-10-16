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

// Function: sub_0022DCE8
// Address: 0x22dce8 - 0x22e120
void sub_0022DCE8_0x22dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DCE8_0x22dce8");
#endif

    switch (ctx->pc) {
        case 0x22dd1cu: goto label_22dd1c;
        case 0x22df10u: goto label_22df10;
        case 0x22e110u: goto label_22e110;
        default: break;
    }

    ctx->pc = 0x22dce8u;

    // 0x22dce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22dcec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dcf0: 0x8c423ef4  lw          $v0, 0x3EF4($v0)
    ctx->pc = 0x22dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22dcf4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22DCF4u;
    {
        const bool branch_taken_0x22dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCF4u;
        // 0x22dcf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcf4) {
            ctx->pc = 0x22DD24u;
            goto label_22dd24;
        }
    }
    ctx->pc = 0x22DCFCu;
    // 0x22dcfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22dd00: 0x94633f10  lhu         $v1, 0x3F10($v1)
    ctx->pc = 0x22dd00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x6B3F10u));
    // 0x22dd04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dd08: 0x94423f12  lhu         $v0, 0x3F12($v0)
    ctx->pc = 0x22dd08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22dd0c: 0x10620101  beq         $v1, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x22DD0Cu;
    {
        const bool branch_taken_0x22dd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD0Cu;
        // 0x22dd10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd0c) {
            ctx->pc = 0x22E114u;
            goto label_22e114;
        }
    }
    ctx->pc = 0x22DD14u;
    // 0x22dd14: 0xc08b4e0  jal         func_22D380
    ctx->pc = 0x22DD14u;
    SET_GPR_U32(ctx, 31, 0x22DD1Cu);
    ctx->pc = 0x22D380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D380u, 0x22DD14u, 0x22DD1Cu)) {
        return;
    }
    ctx->pc = 0x22DD1Cu;
label_22dd1c:
    // 0x22dd1c: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x22DD1Cu;
    {
        const bool branch_taken_0x22dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD1Cu;
        // 0x22dd20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd1c) {
            ctx->pc = 0x22E114u;
            goto label_22e114;
        }
    }
    ctx->pc = 0x22DD24u;
label_22dd24:
    // 0x22dd24: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22DD24u;
    {
        const bool branch_taken_0x22dd24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x22DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD24u;
        // 0x22dd28: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd24) {
            ctx->pc = 0x22DDD0u;
            goto label_22ddd0;
        }
    }
    ctx->pc = 0x22DD2Cu;
    // 0x22dd2c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22dd30: 0x8c843ea8  lw          $a0, 0x3EA8($a0)
    ctx->pc = 0x22dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22dd34: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22dd38: 0x8ca53eac  lw          $a1, 0x3EAC($a1)
    ctx->pc = 0x22dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22dd3c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22dd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22dd40: 0x8cc63ef0  lw          $a2, 0x3EF0($a2)
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3EF0u));
    // 0x22dd44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dd48: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22dd4c: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22dd50: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22dd54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22dd58: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x22dd5c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x22dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22dd60: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DD60u;
    {
        const bool branch_taken_0x22dd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD60u;
        // 0x22dd64: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd60) {
            ctx->pc = 0x22DD98u;
            goto label_22dd98;
        }
    }
    ctx->pc = 0x22DD68u;
    // 0x22dd68: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x22dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x22dd6c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22dd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x22dd70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22dd74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22dd78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22dd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22dd7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22dd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x22dd80: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x22dd84: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x22dd84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22dd88: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x22dd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x22dd8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DD8Cu;
    {
        const bool branch_taken_0x22dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD8Cu;
        // 0x22dd90: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd8c) {
            ctx->pc = 0x22DDA4u;
            goto label_22dda4;
        }
    }
    ctx->pc = 0x22DD94u;
    // 0x22dd94: 0x0  nop
    ctx->pc = 0x22dd94u;
    // NOP
label_22dd98:
    // 0x22dd98: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x22dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x22dd9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dda0: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22dda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
label_22dda4:
    // 0x22dda4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dda8: 0xac203ef0  sw          $zero, 0x3EF0($at)
    ctx->pc = 0x22dda8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF0u, _value); } while (0);
    // 0x22ddac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22ddb0: 0x8c633ef4  lw          $v1, 0x3EF4($v1)
    ctx->pc = 0x22ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22ddb4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x22ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x22ddb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22ddbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22ddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22ddc0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22ddc4: 0xac233ef4  sw          $v1, 0x3EF4($at)
    ctx->pc = 0x22ddc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EF4u, _value); } while (0);
    // 0x22ddc8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22ddcc: 0x8c844160  lw          $a0, 0x4160($a0)
    ctx->pc = 0x22ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4160u));
label_22ddd0:
    // 0x22ddd0: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22DDD0u;
    {
        const bool branch_taken_0x22ddd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDD0u;
        // 0x22ddd4: 0x8f838e84  lw          $v1, -0x717C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddd0) {
            ctx->pc = 0x22DE98u;
            goto label_22de98;
        }
    }
    ctx->pc = 0x22DDD8u;
    // 0x22ddd8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x22ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x22dddc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22DDDCu;
    {
        const bool branch_taken_0x22dddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDDCu;
        // 0x22dde0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dddc) {
            ctx->pc = 0x22DE7Cu;
            goto label_22de7c;
        }
    }
    ctx->pc = 0x22DDE4u;
    // 0x22dde4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x22dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x22dde8: 0x71024b89  pcpyld      $t1, $t0, $v0
    ctx->pc = 0x22dde8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x22ddec: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x22ddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x22ddf0: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x22ddf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x22ddf4: 0x34638440  ori         $v1, $v1, 0x8440
    ctx->pc = 0x22ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33856);
    // 0x22ddf8: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x22ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x22ddfc: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x22ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x22de00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x22de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x22de04: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x22de04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x22de08: 0x70624b89  pcpyld      $t1, $v1, $v0
    ctx->pc = 0x22de08u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x22de0c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x22de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22de10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22de14: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22de14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22de18: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x22de18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22de1c: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x22de1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x22de20: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x22de20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x22de24: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x22de24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22de28: 0x3c070600  lui         $a3, 0x600
    ctx->pc = 0x22de28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1536 << 16));
    // 0x22de2c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x22de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x22de30: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x22de30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x22de34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22de38: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x22de38u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x22de3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22de40: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x22de40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22de44: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22de48: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x22de48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x22de4c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22de50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22de50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22de54: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22de54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22de58: 0x70a84b89  pcpyld      $t1, $a1, $t0
    ctx->pc = 0x22de58u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x22de5c: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x22de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x22de60: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x22de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22de64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22de68: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x22de68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22de6c: 0x70e64b89  pcpyld      $t1, $a3, $a2
    ctx->pc = 0x22de6cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x22de70: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x22de70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x22de74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22DE74u;
    {
        const bool branch_taken_0x22de74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE74u;
        // 0x22de78: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de74) {
            ctx->pc = 0x22DEBCu;
            goto label_22debc;
        }
    }
    ctx->pc = 0x22DE7Cu;
label_22de7c:
    // 0x22de7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22de80: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22de80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22de84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22de84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de88: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x22de8c: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x22de8cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x22de90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DE90u;
    {
        const bool branch_taken_0x22de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE90u;
        // 0x22de94: 0x7c490000  sq          $t1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de90) {
            ctx->pc = 0x22DEB0u;
            goto label_22deb0;
        }
    }
    ctx->pc = 0x22DE98u;
label_22de98:
    // 0x22de98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22de9c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22dea0: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x22dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x22dea4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x22dea8: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x22dea8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x22deac: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x22deacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_22deb0:
    // 0x22deb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22deb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22deb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22deb8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x22deb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_22debc:
    // 0x22debc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dec0: 0xac204164  sw          $zero, 0x4164($at)
    ctx->pc = 0x22dec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22dec4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22dec8: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22decc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DECCu;
    {
        const bool branch_taken_0x22decc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DECCu;
        // 0x22ded0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22decc) {
            ctx->pc = 0x22DEE0u;
            goto label_22dee0;
        }
    }
    ctx->pc = 0x22DED4u;
    // 0x22ded4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ded8: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22dedc: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22dee0:
    // 0x22dee0: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22DEE0u;
    {
        const bool branch_taken_0x22dee0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE0u;
        // 0x22dee4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dee0) {
            ctx->pc = 0x22DFF8u;
            goto label_22dff8;
        }
    }
    ctx->pc = 0x22DEE8u;
    // 0x22dee8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22deec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22deecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22def0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22def4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22DEF4u;
    {
        const bool branch_taken_0x22def4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF4u;
        // 0x22def8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def4) {
            ctx->pc = 0x22DF30u;
            goto label_22df30;
        }
    }
    ctx->pc = 0x22DEFCu;
    // 0x22defc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22df00: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22df04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22df04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22df08: 0xf  sync
    ctx->pc = 0x22df08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22df0c: 0x40f  sync.p
    ctx->pc = 0x22df0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22df10:
    // 0x22df10: 0x0  nop
    ctx->pc = 0x22df10u;
    // NOP
    // 0x22df14: 0x0  nop
    ctx->pc = 0x22df14u;
    // NOP
    // 0x22df18: 0x0  nop
    ctx->pc = 0x22df18u;
    // NOP
    // 0x22df1c: 0x0  nop
    ctx->pc = 0x22df1cu;
    // NOP
    // 0x22df20: 0x0  nop
    ctx->pc = 0x22df20u;
    // NOP
    // 0x22df24: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22DF24u;
    {
        const bool branch_taken_0x22df24 = (false);
        if (branch_taken_0x22df24) {
            ctx->pc = 0x22DF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22df10;
        }
    }
    ctx->pc = 0x22DF2Cu;
    // 0x22df2c: 0x0  nop
    ctx->pc = 0x22df2cu;
    // NOP
label_22df30:
    // 0x22df30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22df34: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22df34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22df38: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22df3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22df40: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22df40u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22df44: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22df44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22df48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22df4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22df50: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22df50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22df54: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22df58: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22df5c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22df5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22df60: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22df60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22df64: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22df64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22df68: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22df68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22df6c: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22df6cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22df70: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22df70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22df74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22df74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22df78: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22df78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22df7c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22df7cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22df80: 0xf  sync
    ctx->pc = 0x22df80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22df84: 0x40f  sync.p
    ctx->pc = 0x22df84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22df88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22df8c: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22df90: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DF90u;
    {
        const bool branch_taken_0x22df90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF90u;
        // 0x22df94: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df90) {
            ctx->pc = 0x22DFC8u;
            goto label_22dfc8;
        }
    }
    ctx->pc = 0x22DF98u;
    // 0x22df98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22df9c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22dfa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22dfa4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22DFA4u;
    {
        const bool branch_taken_0x22dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFA4u;
        // 0x22dfa8: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfa4) {
            ctx->pc = 0x22DFD0u;
            goto label_22dfd0;
        }
    }
    ctx->pc = 0x22DFACu;
    // 0x22dfac: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22dfb0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22dfb4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22dfb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22dfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22dfbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dfc0: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22dfc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22dfc4: 0x0  nop
    ctx->pc = 0x22dfc4u;
    // NOP
label_22dfc8:
    // 0x22dfc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22dfcc: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22dfd0:
    // 0x22dfd0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22dfd4: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22dfd8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22dfdc: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22dfe0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dfe4: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22dfe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22dfe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dfec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22dfecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22dff0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22dff4: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22dff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22dff8:
    // 0x22dff8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22dffc: 0x8c633eb8  lw          $v1, 0x3EB8($v1)
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EB8u));
    // 0x22e000: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E000u;
    {
        const bool branch_taken_0x22e000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E000u;
        // 0x22e004: 0x8f828e44  lw          $v0, -0x71BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e000) {
            ctx->pc = 0x22E078u;
            goto label_22e078;
        }
    }
    ctx->pc = 0x22E008u;
    // 0x22e008: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22E008u;
    {
        const bool branch_taken_0x22e008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E008u;
        // 0x22e00c: 0x8f848e4c  lw          $a0, -0x71B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e008) {
            ctx->pc = 0x22E058u;
            goto label_22e058;
        }
    }
    ctx->pc = 0x22E010u;
    // 0x22e010: 0x24021121  addiu       $v0, $zero, 0x1121
    ctx->pc = 0x22e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x22e014: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x22e014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x22e018: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22e01c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e020: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e024: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e028: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
    // 0x22e02c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22e030: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e034: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22e034u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e038: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22e03c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e040: 0xac223ebc  sw          $v0, 0x3EBC($at)
    ctx->pc = 0x22e040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
    // 0x22e044: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x22e044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x22e048: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e04c: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22E050u;
    {
        const bool branch_taken_0x22e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E050u;
        // 0x22e054: 0x8f828e44  lw          $v0, -0x71BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e050) {
            ctx->pc = 0x22E074u;
            goto label_22e074;
        }
    }
    ctx->pc = 0x22E058u;
label_22e058:
    // 0x22e058: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e05c: 0x8c423ebc  lw          $v0, 0x3EBC($v0)
    ctx->pc = 0x22e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e060: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22e064: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e068: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22e06c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e070: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
label_22e074:
    // 0x22e074: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22e074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_22e078:
    // 0x22e078: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22e07c: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22e080: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e084: 0x8c423ee8  lw          $v0, 0x3EE8($v0)
    ctx->pc = 0x22e084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EE8u));
    // 0x22e088: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e08c: 0x8c843eec  lw          $a0, 0x3EEC($a0)
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EECu));
    // 0x22e090: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e094: 0x8c633ef4  lw          $v1, 0x3EF4($v1)
    ctx->pc = 0x22e094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EF4u));
    // 0x22e098: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e09c: 0xac253ebc  sw          $a1, 0x3EBC($at)
    ctx->pc = 0x22e09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
    // 0x22e0a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x22e0a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0a8: 0xac223eb0  sw          $v0, 0x3EB0($at)
    ctx->pc = 0x22e0a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB0u, _value); } while (0);
    // 0x22e0ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0b0: 0xac233eb8  sw          $v1, 0x3EB8($at)
    ctx->pc = 0x22e0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB8u, _value); } while (0);
    // 0x22e0b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0b8: 0xac243eb4  sw          $a0, 0x3EB4($at)
    ctx->pc = 0x22e0b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB4u, _value); } while (0);
    // 0x22e0bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E0BCu;
    {
        const bool branch_taken_0x22e0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0BCu;
        // 0x22e0c0: 0xaf858e74  sw          $a1, -0x718C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0bc) {
            ctx->pc = 0x22E0D0u;
            goto label_22e0d0;
        }
    }
    ctx->pc = 0x22E0C4u;
    // 0x22e0c4: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x22e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x22e0c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0cc: 0xac223ee4  sw          $v0, 0x3EE4($at)
    ctx->pc = 0x22e0ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE4u, _value); } while (0);
label_22e0d0:
    // 0x22e0d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e0d4: 0x94633f10  lhu         $v1, 0x3F10($v1)
    ctx->pc = 0x22e0d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x6B3F10u));
    // 0x22e0d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e0dc: 0x94423f12  lhu         $v0, 0x3F12($v0)
    ctx->pc = 0x22e0dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22e0e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0e4: 0xac204160  sw          $zero, 0x4160($at)
    ctx->pc = 0x22e0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4160u, _value); } while (0);
    // 0x22e0e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0ec: 0xac20412c  sw          $zero, 0x412C($at)
    ctx->pc = 0x22e0ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22e0f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0f4: 0xac203ee8  sw          $zero, 0x3EE8($at)
    ctx->pc = 0x22e0f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EE8u, _value); } while (0);
    // 0x22e0f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e0fc: 0xac203eec  sw          $zero, 0x3EEC($at)
    ctx->pc = 0x22e0fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EECu, _value); } while (0);
    // 0x22e100: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E100u;
    {
        const bool branch_taken_0x22e100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E100u;
        // 0x22e104: 0xaf808e84  sw          $zero, -0x717C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e100) {
            ctx->pc = 0x22E110u;
            goto label_22e110;
        }
    }
    ctx->pc = 0x22E108u;
    // 0x22e108: 0xc08b4e0  jal         func_22D380
    ctx->pc = 0x22E108u;
    SET_GPR_U32(ctx, 31, 0x22E110u);
    ctx->pc = 0x22D380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D380u, 0x22E108u, 0x22E110u)) {
        return;
    }
    ctx->pc = 0x22E110u;
label_22e110:
    // 0x22e110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e114:
    // 0x22e114: 0x3e00008  jr          $ra
    ctx->pc = 0x22E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E114u;
        // 0x22e118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E11Cu;
    // 0x22e11c: 0x0  nop
    ctx->pc = 0x22e11cu;
    // NOP
    ctx->pc = 0x22e120u;
}
