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

// Function: sub_00139FF0
// Address: 0x139ff0 - 0x13a148
void sub_00139FF0_0x139ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139FF0_0x139ff0");
#endif

    switch (ctx->pc) {
        case 0x13a018u: goto label_13a018;
        case 0x13a024u: goto label_13a024;
        case 0x13a030u: goto label_13a030;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a048u: goto label_13a048;
        case 0x13a054u: goto label_13a054;
        case 0x13a060u: goto label_13a060;
        case 0x13a06cu: goto label_13a06c;
        case 0x13a07cu: goto label_13a07c;
        case 0x13a0a0u: goto label_13a0a0;
        case 0x13a0b4u: goto label_13a0b4;
        case 0x13a0c4u: goto label_13a0c4;
        case 0x13a0d4u: goto label_13a0d4;
        case 0x13a0e4u: goto label_13a0e4;
        case 0x13a0f4u: goto label_13a0f4;
        case 0x13a104u: goto label_13a104;
        case 0x13a114u: goto label_13a114;
        case 0x13a124u: goto label_13a124;
        case 0x13a134u: goto label_13a134;
        default: break;
    }

    ctx->pc = 0x139ff0u;

    // 0x139ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139ff4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x139ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x139ff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139ffc: 0x14a2004d  bne         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x139FFCu;
    {
        const bool branch_taken_0x139ffc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FFCu;
        // 0x13a000: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ffc) {
            ctx->pc = 0x13A134u;
            goto label_13a134;
        }
    }
    ctx->pc = 0x13A004u;
    // 0x13a004: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x13A004u;
    {
        const bool branch_taken_0x13a004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a004) {
            ctx->pc = 0x13A008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A004u;
            // 0x13a008: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A0A8u;
            goto label_13a0a8;
        }
    }
    ctx->pc = 0x13A00Cu;
    // 0x13a00c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a010: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A010u;
    SET_GPR_U32(ctx, 31, 0x13A018u);
    ctx->pc = 0x13A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A010u;
    // 0x13a014: 0x24844758  addiu       $a0, $a0, 0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A010u, 0x13A018u)) {
        return;
    }
    ctx->pc = 0x13A018u;
label_13a018:
    // 0x13a018: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a01c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A01Cu;
    SET_GPR_U32(ctx, 31, 0x13A024u);
    ctx->pc = 0x13A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A01Cu;
    // 0x13a020: 0x24844760  addiu       $a0, $a0, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A01Cu, 0x13A024u)) {
        return;
    }
    ctx->pc = 0x13A024u;
label_13a024:
    // 0x13a024: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a028: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A028u;
    SET_GPR_U32(ctx, 31, 0x13A030u);
    ctx->pc = 0x13A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A028u;
    // 0x13a02c: 0x24844768  addiu       $a0, $a0, 0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A028u, 0x13A030u)) {
        return;
    }
    ctx->pc = 0x13A030u;
label_13a030:
    // 0x13a030: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a034: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A034u;
    SET_GPR_U32(ctx, 31, 0x13A03Cu);
    ctx->pc = 0x13A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A034u;
    // 0x13a038: 0x24844770  addiu       $a0, $a0, 0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A034u, 0x13A03Cu)) {
        return;
    }
    ctx->pc = 0x13A03Cu;
label_13a03c:
    // 0x13a03c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a040: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A040u;
    SET_GPR_U32(ctx, 31, 0x13A048u);
    ctx->pc = 0x13A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A040u;
    // 0x13a044: 0x24844778  addiu       $a0, $a0, 0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A040u, 0x13A048u)) {
        return;
    }
    ctx->pc = 0x13A048u;
label_13a048:
    // 0x13a048: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a04c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A04Cu;
    SET_GPR_U32(ctx, 31, 0x13A054u);
    ctx->pc = 0x13A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A04Cu;
    // 0x13a050: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A04Cu, 0x13A054u)) {
        return;
    }
    ctx->pc = 0x13A054u;
label_13a054:
    // 0x13a054: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a058: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A058u;
    SET_GPR_U32(ctx, 31, 0x13A060u);
    ctx->pc = 0x13A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A058u;
    // 0x13a05c: 0x24844788  addiu       $a0, $a0, 0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A058u, 0x13A060u)) {
        return;
    }
    ctx->pc = 0x13A060u;
label_13a060:
    // 0x13a060: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a064: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13A064u;
    SET_GPR_U32(ctx, 31, 0x13A06Cu);
    ctx->pc = 0x13A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A064u;
    // 0x13a068: 0x24844790  addiu       $a0, $a0, 0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13A064u, 0x13A06Cu)) {
        return;
    }
    ctx->pc = 0x13A06Cu;
label_13a06c:
    // 0x13a06c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x13a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x13a070: 0x2610ecd8  addiu       $s0, $s0, -0x1328
    ctx->pc = 0x13a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962392));
    // 0x13a074: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13A074u;
    SET_GPR_U32(ctx, 31, 0x13A07Cu);
    ctx->pc = 0x13A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A074u;
    // 0x13a078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13A074u, 0x13A07Cu)) {
        return;
    }
    ctx->pc = 0x13A07Cu;
label_13a07c:
    // 0x13a07c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13a080: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a084: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13a088: 0xac624798  sw          $v0, 0x4798($v1)
    ctx->pc = 0x13a088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4798u, _value); } while (0);
    // 0x13a08c: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x13a090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a094: 0x24c6a148  addiu       $a2, $a2, -0x5EB8
    ctx->pc = 0x13a094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943048));
    // 0x13a098: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13A098u;
    SET_GPR_U32(ctx, 31, 0x13A0A0u);
    ctx->pc = 0x13A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A098u;
    // 0x13a09c: 0x240701d4  addiu       $a3, $zero, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13A098u, 0x13A0A0u)) {
        return;
    }
    ctx->pc = 0x13A0A0u;
label_13a0a0:
    // 0x13a0a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13A0A0u;
    {
        const bool branch_taken_0x13a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0A0u;
        // 0x13a0a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a0a0) {
            ctx->pc = 0x13A138u;
            goto label_13a138;
        }
    }
    ctx->pc = 0x13A0A8u;
label_13a0a8:
    // 0x13a0a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0ac: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13A0ACu;
    SET_GPR_U32(ctx, 31, 0x13A0B4u);
    ctx->pc = 0x13A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0ACu;
    // 0x13a0b0: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13A0ACu, 0x13A0B4u)) {
        return;
    }
    ctx->pc = 0x13A0B4u;
label_13a0b4:
    // 0x13a0b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a0b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0bc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A0BCu;
    SET_GPR_U32(ctx, 31, 0x13A0C4u);
    ctx->pc = 0x13A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0BCu;
    // 0x13a0c0: 0x24844790  addiu       $a0, $a0, 0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A0BCu, 0x13A0C4u)) {
        return;
    }
    ctx->pc = 0x13A0C4u;
label_13a0c4:
    // 0x13a0c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a0c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0cc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A0CCu;
    SET_GPR_U32(ctx, 31, 0x13A0D4u);
    ctx->pc = 0x13A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0CCu;
    // 0x13a0d0: 0x24844788  addiu       $a0, $a0, 0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A0CCu, 0x13A0D4u)) {
        return;
    }
    ctx->pc = 0x13A0D4u;
label_13a0d4:
    // 0x13a0d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a0d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0dc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A0DCu;
    SET_GPR_U32(ctx, 31, 0x13A0E4u);
    ctx->pc = 0x13A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0DCu;
    // 0x13a0e0: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A0DCu, 0x13A0E4u)) {
        return;
    }
    ctx->pc = 0x13A0E4u;
label_13a0e4:
    // 0x13a0e4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a0e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0ec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A0ECu;
    SET_GPR_U32(ctx, 31, 0x13A0F4u);
    ctx->pc = 0x13A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0ECu;
    // 0x13a0f0: 0x24844778  addiu       $a0, $a0, 0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A0ECu, 0x13A0F4u)) {
        return;
    }
    ctx->pc = 0x13A0F4u;
label_13a0f4:
    // 0x13a0f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a0f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0fc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A0FCu;
    SET_GPR_U32(ctx, 31, 0x13A104u);
    ctx->pc = 0x13A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0FCu;
    // 0x13a100: 0x24844770  addiu       $a0, $a0, 0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A0FCu, 0x13A104u)) {
        return;
    }
    ctx->pc = 0x13A104u;
label_13a104:
    // 0x13a104: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a10c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A10Cu;
    SET_GPR_U32(ctx, 31, 0x13A114u);
    ctx->pc = 0x13A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A10Cu;
    // 0x13a110: 0x24844768  addiu       $a0, $a0, 0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A10Cu, 0x13A114u)) {
        return;
    }
    ctx->pc = 0x13A114u;
label_13a114:
    // 0x13a114: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a118: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a11c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A11Cu;
    SET_GPR_U32(ctx, 31, 0x13A124u);
    ctx->pc = 0x13A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A11Cu;
    // 0x13a120: 0x24844760  addiu       $a0, $a0, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A11Cu, 0x13A124u)) {
        return;
    }
    ctx->pc = 0x13A124u;
label_13a124:
    // 0x13a124: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13a128: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a12c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13A12Cu;
    SET_GPR_U32(ctx, 31, 0x13A134u);
    ctx->pc = 0x13A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A12Cu;
    // 0x13a130: 0x24844758  addiu       $a0, $a0, 0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13A12Cu, 0x13A134u)) {
        return;
    }
    ctx->pc = 0x13A134u;
label_13a134:
    // 0x13a134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13a134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a138:
    // 0x13a138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A13Cu;
        // 0x13a140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A144u;
    // 0x13a144: 0x0  nop
    ctx->pc = 0x13a144u;
    // NOP
    ctx->pc = 0x13a148u;
}
