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

// Function: sub_0022E5F8
// Address: 0x22e5f8 - 0x22e6b8
void sub_0022E5F8_0x22e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E5F8_0x22e5f8");
#endif

    switch (ctx->pc) {
        case 0x22e694u: goto label_22e694;
        default: break;
    }

    ctx->pc = 0x22e5f8u;

    // 0x22e5f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22e5fc: 0x94633f12  lhu         $v1, 0x3F12($v1)
    ctx->pc = 0x22e5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22e600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e604: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22e608: 0x8ca53f0c  lw          $a1, 0x3F0C($a1)
    ctx->pc = 0x22e608u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F0Cu));
    // 0x22e60c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22e60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e610: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e61c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22e620: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e624: 0xa4233f12  sh          $v1, 0x3F12($at)
    ctx->pc = 0x22e624u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F12u, _value); } while (0);
    // 0x22e628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e630: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x22e630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x22e634: 0x97868406  lhu         $a2, -0x7BFA($gp)
    ctx->pc = 0x22e634u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935558)));
    // 0x22e638: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e63c: 0x94423f12  lhu         $v0, 0x3F12($v0)
    ctx->pc = 0x22e63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22e640: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x22e640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x22e644: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x22E644u;
    {
        const bool branch_taken_0x22e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x22e644) {
            ctx->pc = 0x22E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E644u;
            // 0x22e648: 0xa7808ea2  sh          $zero, -0x715E($gp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 28), 4294938274), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E64Cu;
            goto label_22e64c;
        }
    }
    ctx->pc = 0x22E64Cu;
label_22e64c:
    // 0x22e64c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22e650: 0x94843f10  lhu         $a0, 0x3F10($a0)
    ctx->pc = 0x22e650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6B3F10u));
    // 0x22e654: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22e658: 0x94423f12  lhu         $v0, 0x3F12($v0)
    ctx->pc = 0x22e658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x6B3F12u));
    // 0x22e65c: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22E65Cu;
    {
        const bool branch_taken_0x22e65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E65Cu;
        // 0x22e660: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e65c) {
            ctx->pc = 0x22E6A8u;
            goto label_22e6a8;
        }
    }
    ctx->pc = 0x22E664u;
    // 0x22e664: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x22e664u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x22e668: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e66c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22e670: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x22e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x22e674: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x22e674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x22e678: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E678u;
    {
        const bool branch_taken_0x22e678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E678u;
        // 0x22e67c: 0xa7848ea2  sh          $a0, -0x715E($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938274), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e678) {
            ctx->pc = 0x22E68Cu;
            goto label_22e68c;
        }
    }
    ctx->pc = 0x22E680u;
    // 0x22e680: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x22e680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22e684: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e688: 0xa4223f12  sh          $v0, 0x3F12($at)
    ctx->pc = 0x22e688u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F12u, _value); } while (0);
label_22e68c:
    // 0x22e68c: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22E68Cu;
    SET_GPR_U32(ctx, 31, 0x22E694u);
    ctx->pc = 0x22E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E68Cu;
    // 0x22e690: 0x97908ea2  lhu         $s0, -0x715E($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22E68Cu, 0x22E694u)) {
        return;
    }
    ctx->pc = 0x22E694u;
label_22e694:
    // 0x22e694: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e698: 0xa4303f10  sh          $s0, 0x3F10($at)
    ctx->pc = 0x22e698u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B3F10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F10u, _value); } while (0);
    // 0x22e69c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22e6a0: 0xa4313f12  sh          $s1, 0x3F12($at)
    ctx->pc = 0x22e6a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6B3F12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B3F12u, _value); } while (0);
    // 0x22e6a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e6a8:
    // 0x22e6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x22E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6B0u;
        // 0x22e6b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E6B8u;
}
