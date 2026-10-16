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

// Function: sub_0022FA28
// Address: 0x22fa28 - 0x22fc60
void sub_0022FA28_0x22fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FA28_0x22fa28");
#endif

    switch (ctx->pc) {
        case 0x22fa4cu: goto label_22fa4c;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fb94u: goto label_22fb94;
        default: break;
    }

    ctx->pc = 0x22fa28u;

    // 0x22fa28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22fa2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22fa30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22fa34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22fa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22fa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fa40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa44: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x22FA44u;
    SET_GPR_U32(ctx, 31, 0x22FA4Cu);
    ctx->pc = 0x22FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA44u;
    // 0x22fa48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x22FA44u, 0x22FA4Cu)) {
        return;
    }
    ctx->pc = 0x22FA4Cu;
label_22fa4c:
    // 0x22fa4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22FA4Cu;
    {
        const bool branch_taken_0x22fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA4Cu;
        // 0x22fa50: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa4c) {
            ctx->pc = 0x22FA90u;
            goto label_22fa90;
        }
    }
    ctx->pc = 0x22FA54u;
    // 0x22fa54: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FA54u;
    {
        const bool branch_taken_0x22fa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA54u;
        // 0x22fa58: 0x8f838e64  lw          $v1, -0x719C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa54) {
            ctx->pc = 0x22FA74u;
            goto label_22fa74;
        }
    }
    ctx->pc = 0x22FA5Cu;
    // 0x22fa5c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x22fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22fa60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22fa64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fa68: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22fa68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22fa6c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22FA6Cu;
    {
        const bool branch_taken_0x22fa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA6Cu;
        // 0x22fa70: 0x24830010  addiu       $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa6c) {
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA74u;
label_22fa74:
    // 0x22fa74: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x22fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x22fa78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa7c: 0xc08bdde  jal         func_22F778
    ctx->pc = 0x22FA7Cu;
    SET_GPR_U32(ctx, 31, 0x22FA84u);
    ctx->pc = 0x22FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA7Cu;
    // 0x22fa80: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F778u, 0x22FA7Cu, 0x22FA84u)) {
        return;
    }
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22fa84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa88: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA88u;
    {
        const bool branch_taken_0x22fa88 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA88u;
        // 0x22fa8c: 0x8f828e60  lw          $v0, -0x71A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa88) {
            ctx->pc = 0x22FA98u;
            goto label_22fa98;
        }
    }
    ctx->pc = 0x22FA90u;
label_22fa90:
    // 0x22fa90: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22FA90u;
    {
        const bool branch_taken_0x22fa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA90u;
        // 0x22fa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa90) {
            ctx->pc = 0x22FC48u;
            goto label_22fc48;
        }
    }
    ctx->pc = 0x22FA98u;
label_22fa98:
    // 0x22fa98: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x22fa9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22fa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22faa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22FAA0u;
    {
        const bool branch_taken_0x22faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAA0u;
        // 0x22faa4: 0xaf828e64  sw          $v0, -0x719C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faa0) {
            ctx->pc = 0x22FAB4u;
            goto label_22fab4;
        }
    }
    ctx->pc = 0x22FAA8u;
label_22faa8:
    // 0x22faa8: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x22faac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22faacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22fab0: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x22fab0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22fab4:
    // 0x22fab4: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x22fab8: 0x8d4a4160  lw          $t2, 0x4160($t2)
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6B4160u));
    // 0x22fabc: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x22FABCu;
    {
        const bool branch_taken_0x22fabc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FABCu;
        // 0x22fac0: 0x8f8283fc  lw          $v0, -0x7C04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fabc) {
            ctx->pc = 0x22FB30u;
            goto label_22fb30;
        }
    }
    ctx->pc = 0x22FAC4u;
    // 0x22fac4: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x22fac8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x22facc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22faccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fad0: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22fad4: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x22fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x22fad8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22fadc: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x22fadcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x22fae0: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x22fae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x22fae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22fae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22fae8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22faec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22faf0: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x22faf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x22faf4: 0x70e22b89  pcpyld      $a1, $a3, $v0
    ctx->pc = 0x22faf4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x22faf8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22faf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22fafc: 0x7d45ffd0  sq          $a1, -0x30($t2)
    ctx->pc = 0x22fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967248), GPR_VEC(ctx, 5));
    // 0x22fb00: 0x71062b89  pcpyld      $a1, $t0, $a2
    ctx->pc = 0x22fb00u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x22fb04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fb08: 0x8c424160  lw          $v0, 0x4160($v0)
    ctx->pc = 0x22fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4160u));
    // 0x22fb0c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x22fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x22fb10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22fb14: 0x70e42b89  pcpyld      $a1, $a3, $a0
    ctx->pc = 0x22fb14u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x22fb18: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fb1c: 0xac224160  sw          $v0, 0x4160($at)
    ctx->pc = 0x22fb1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4160u, _value); } while (0);
    // 0x22fb20: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22fb24: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x22fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x22fb28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FB28u;
    {
        const bool branch_taken_0x22fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB28u;
        // 0x22fb2c: 0xaf8390f0  sw          $v1, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb28) {
            ctx->pc = 0x22FB38u;
            goto label_22fb38;
        }
    }
    ctx->pc = 0x22FB30u;
label_22fb30:
    // 0x22fb30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fb34: 0xac293eec  sw          $t1, 0x3EEC($at)
    ctx->pc = 0x22fb34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6B3EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EECu, _value); } while (0);
label_22fb38:
    // 0x22fb38: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x22fb3c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x22fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x22fb40: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22FB40u;
    {
        const bool branch_taken_0x22fb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB40u;
        // 0x22fb44: 0xaf8290f0  sw          $v0, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb40) {
            ctx->pc = 0x22FBECu;
            goto label_22fbec;
        }
    }
    ctx->pc = 0x22FB48u;
    // 0x22fb48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22fb4c: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22fb50: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB50u;
        // 0x22fb54: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x22FBECu;
            goto label_22fbec;
        }
    }
    ctx->pc = 0x22FB58u;
    // 0x22fb58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22fb5c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22fb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22fb60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22fb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22fb64: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22FB64u;
    {
        const bool branch_taken_0x22fb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB64u;
        // 0x22fb68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb64) {
            ctx->pc = 0x22FBB0u;
            goto label_22fbb0;
        }
    }
    ctx->pc = 0x22FB6Cu;
    // 0x22fb6c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22fb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22fb70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22fb74: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22fb78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22FB78u;
    {
        const bool branch_taken_0x22fb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb78) {
            ctx->pc = 0x22FBB0u;
            goto label_22fbb0;
        }
    }
    ctx->pc = 0x22FB80u;
    // 0x22fb80: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22fb84: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22fb88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22fb88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22fb8c: 0xf  sync
    ctx->pc = 0x22fb8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22fb90: 0x40f  sync.p
    ctx->pc = 0x22fb90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22fb94:
    // 0x22fb94: 0x0  nop
    ctx->pc = 0x22fb94u;
    // NOP
    // 0x22fb98: 0x0  nop
    ctx->pc = 0x22fb98u;
    // NOP
    // 0x22fb9c: 0x0  nop
    ctx->pc = 0x22fb9cu;
    // NOP
    // 0x22fba0: 0x0  nop
    ctx->pc = 0x22fba0u;
    // NOP
    // 0x22fba4: 0x0  nop
    ctx->pc = 0x22fba4u;
    // NOP
    // 0x22fba8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FBA8u;
    {
        const bool branch_taken_0x22fba8 = (false);
        if (branch_taken_0x22fba8) {
            ctx->pc = 0x22FB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fb94;
        }
    }
    ctx->pc = 0x22FBB0u;
label_22fbb0:
    // 0x22fbb0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x22fbb4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22fbb8: 0x8cc64164  lw          $a2, 0x4164($a2)
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22fbbc: 0x24423670  addiu       $v0, $v0, 0x3670
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13936));
    // 0x22fbc0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x22fbc4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x22fbc4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x703670u));
    // 0x22fbc8: 0x24633680  addiu       $v1, $v1, 0x3680
    ctx->pc = 0x22fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13952));
    // 0x22fbcc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x22fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x22fbd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fbd4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22fbd8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x22fbd8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x703680u));
    // 0x22fbdc: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x22fbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x22fbe0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22fbe4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22FBE4u;
    {
        const bool branch_taken_0x22fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE4u;
        // 0x22fbe8: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbe4) {
            ctx->pc = 0x22FC10u;
            goto label_22fc10;
        }
    }
    ctx->pc = 0x22FBECu;
label_22fbec:
    // 0x22fbec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x22fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x22fbf0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22fbf4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22fbf8: 0x24423690  addiu       $v0, $v0, 0x3690
    ctx->pc = 0x22fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13968));
    // 0x22fbfc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22fbfcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x703690u));
    // 0x22fc00: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x22fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x22fc04: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22fc08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fc0c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x22fc0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_22fc10:
    // 0x22fc10: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x22fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x22fc14: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22fc18: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22fc1c: 0x248436a0  addiu       $a0, $a0, 0x36A0
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13984));
    // 0x22fc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fc24: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x22fc24u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x7036A0u));
    // 0x22fc28: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x22fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x22fc2c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22fc30: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22fc34: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fc38: 0xac244164  sw          $a0, 0x4164($at)
    ctx->pc = 0x22fc38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22fc3c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x22fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22fc40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fc44: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x22fc44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_22fc48:
    // 0x22fc48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22fc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x22FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC54u;
        // 0x22fc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FC5Cu;
    // 0x22fc5c: 0x0  nop
    ctx->pc = 0x22fc5cu;
    // NOP
    ctx->pc = 0x22fc60u;
}
