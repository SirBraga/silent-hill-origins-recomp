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

// Function: sub_001DC028
// Address: 0x1dc028 - 0x1dc110
void sub_001DC028_0x1dc028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC028_0x1dc028");
#endif

    switch (ctx->pc) {
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc084u: goto label_1dc084;
        default: break;
    }

    ctx->pc = 0x1dc028u;

    // 0x1dc028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dc02c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dc02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dc030: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dc030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dc034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc03c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dc040: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1dc044: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DC044u;
    {
        const bool branch_taken_0x1dc044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC044u;
        // 0x1dc048: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc044) {
            ctx->pc = 0x1DC084u;
            goto label_1dc084;
        }
    }
    ctx->pc = 0x1DC04Cu;
    // 0x1dc04c: 0x8e46e664  lw          $a2, -0x199C($s2)
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
    // 0x1dc050: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dc054: 0x24a5ccd8  addiu       $a1, $a1, -0x3328
    ctx->pc = 0x1dc054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954200));
    // 0x1dc058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc05c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1dc05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1dc060: 0xc095966  jal         func_256598
    ctx->pc = 0x1DC060u;
    SET_GPR_U32(ctx, 31, 0x1DC068u);
    ctx->pc = 0x1DC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC060u;
    // 0x1dc064: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x1DC060u, 0x1DC068u)) {
        return;
    }
    ctx->pc = 0x1DC068u;
label_1dc068:
    // 0x1dc068: 0x8e46e664  lw          $a2, -0x199C($s2)
    ctx->pc = 0x1dc068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
    // 0x1dc06c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dc06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dc070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc074: 0x24a5cd18  addiu       $a1, $a1, -0x32E8
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954264));
    // 0x1dc078: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1dc078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1dc07c: 0xc095966  jal         func_256598
    ctx->pc = 0x1DC07Cu;
    SET_GPR_U32(ctx, 31, 0x1DC084u);
    ctx->pc = 0x1DC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC07Cu;
    // 0x1dc080: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x1DC07Cu, 0x1DC084u)) {
        return;
    }
    ctx->pc = 0x1DC084u;
label_1dc084:
    // 0x1dc084: 0x8e42e664  lw          $v0, -0x199C($s2)
    ctx->pc = 0x1dc084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960740)));
    // 0x1dc088: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dc08c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dc090: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC090u;
    {
        const bool branch_taken_0x1dc090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc090) {
            ctx->pc = 0x1DC0B8u;
            goto label_1dc0b8;
        }
    }
    ctx->pc = 0x1DC098u;
    // 0x1dc098: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc09c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC09Cu;
    {
        const bool branch_taken_0x1dc09c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1dc09c) {
            ctx->pc = 0x1DC0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC09Cu;
            // 0x1dc0a0: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC0B0u;
            goto label_1dc0b0;
        }
    }
    ctx->pc = 0x1DC0A4u;
    // 0x1dc0a4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dc0a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DC0A8u;
    {
        const bool branch_taken_0x1dc0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0A8u;
        // 0x1dc0ac: 0x2442c350  addiu       $v0, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0a8) {
            ctx->pc = 0x1DC0E0u;
            goto label_1dc0e0;
        }
    }
    ctx->pc = 0x1DC0B0u;
label_1dc0b0:
    // 0x1dc0b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DC0B0u;
    {
        const bool branch_taken_0x1dc0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0B0u;
        // 0x1dc0b4: 0x2442c240  addiu       $v0, $v0, -0x3DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0b0) {
            ctx->pc = 0x1DC0E0u;
            goto label_1dc0e0;
        }
    }
    ctx->pc = 0x1DC0B8u;
label_1dc0b8:
    // 0x1dc0b8: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DC0B8u;
    {
        const bool branch_taken_0x1dc0b8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1dc0b8) {
            ctx->pc = 0x1DC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC0B8u;
            // 0x1dc0bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC0F8u;
            goto label_1dc0f8;
        }
    }
    ctx->pc = 0x1DC0C0u;
    // 0x1dc0c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dc0c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dc0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dc0c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC0C8u;
    {
        const bool branch_taken_0x1dc0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0C8u;
        // 0x1dc0cc: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0c8) {
            ctx->pc = 0x1DC0D8u;
            goto label_1dc0d8;
        }
    }
    ctx->pc = 0x1DC0D0u;
    // 0x1dc0d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC0D0u;
    {
        const bool branch_taken_0x1dc0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0D0u;
        // 0x1dc0d4: 0x2442c470  addiu       $v0, $v0, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0d0) {
            ctx->pc = 0x1DC0E0u;
            goto label_1dc0e0;
        }
    }
    ctx->pc = 0x1DC0D8u;
label_1dc0d8:
    // 0x1dc0d8: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dc0dc: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
label_1dc0e0:
    // 0x1dc0e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC0E0u;
    {
        const bool branch_taken_0x1dc0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC0E0u;
        // 0x1dc0e4: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0e0) {
            ctx->pc = 0x1DC0F4u;
            goto label_1dc0f4;
        }
    }
    ctx->pc = 0x1DC0E8u;
    // 0x1dc0e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dc0ec: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dc0f0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1dc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1dc0f4:
    // 0x1dc0f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dc0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc0f8:
    // 0x1dc0f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc0fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dc0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc104: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC104u;
        // 0x1dc108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC10Cu;
    // 0x1dc10c: 0x0  nop
    ctx->pc = 0x1dc10cu;
    // NOP
    ctx->pc = 0x1dc110u;
}
