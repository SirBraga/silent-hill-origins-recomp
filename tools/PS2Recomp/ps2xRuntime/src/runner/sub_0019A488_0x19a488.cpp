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

// Function: sub_0019A488
// Address: 0x19a488 - 0x19a570
void sub_0019A488_0x19a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A488_0x19a488");
#endif

    switch (ctx->pc) {
        case 0x19a4b0u: goto label_19a4b0;
        case 0x19a4bcu: goto label_19a4bc;
        case 0x19a4c8u: goto label_19a4c8;
        case 0x19a4d4u: goto label_19a4d4;
        case 0x19a4e4u: goto label_19a4e4;
        case 0x19a508u: goto label_19a508;
        case 0x19a51cu: goto label_19a51c;
        case 0x19a52cu: goto label_19a52c;
        case 0x19a53cu: goto label_19a53c;
        case 0x19a54cu: goto label_19a54c;
        case 0x19a55cu: goto label_19a55c;
        default: break;
    }

    ctx->pc = 0x19a488u;

    // 0x19a488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a48c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19a490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a494: 0x14a20031  bne         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x19A494u;
    {
        const bool branch_taken_0x19a494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A494u;
        // 0x19a498: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a494) {
            ctx->pc = 0x19A55Cu;
            goto label_19a55c;
        }
    }
    ctx->pc = 0x19A49Cu;
    // 0x19a49c: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x19A49Cu;
    {
        const bool branch_taken_0x19a49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a49c) {
            ctx->pc = 0x19A4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A49Cu;
            // 0x19a4a0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A510u;
            goto label_19a510;
        }
    }
    ctx->pc = 0x19A4A4u;
    // 0x19a4a4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a4a8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A4A8u;
    SET_GPR_U32(ctx, 31, 0x19A4B0u);
    ctx->pc = 0x19A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4A8u;
    // 0x19a4ac: 0x24848110  addiu       $a0, $a0, -0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A4A8u, 0x19A4B0u)) {
        return;
    }
    ctx->pc = 0x19A4B0u;
label_19a4b0:
    // 0x19a4b0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a4b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A4B4u;
    SET_GPR_U32(ctx, 31, 0x19A4BCu);
    ctx->pc = 0x19A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4B4u;
    // 0x19a4b8: 0x24848118  addiu       $a0, $a0, -0x7EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A4B4u, 0x19A4BCu)) {
        return;
    }
    ctx->pc = 0x19A4BCu;
label_19a4bc:
    // 0x19a4bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a4c0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A4C0u;
    SET_GPR_U32(ctx, 31, 0x19A4C8u);
    ctx->pc = 0x19A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4C0u;
    // 0x19a4c4: 0x24848120  addiu       $a0, $a0, -0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A4C0u, 0x19A4C8u)) {
        return;
    }
    ctx->pc = 0x19A4C8u;
label_19a4c8:
    // 0x19a4c8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a4cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A4CCu;
    SET_GPR_U32(ctx, 31, 0x19A4D4u);
    ctx->pc = 0x19A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4CCu;
    // 0x19a4d0: 0x24848128  addiu       $a0, $a0, -0x7ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A4CCu, 0x19A4D4u)) {
        return;
    }
    ctx->pc = 0x19A4D4u;
label_19a4d4:
    // 0x19a4d4: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x19a4d8: 0x26109f68  addiu       $s0, $s0, -0x6098
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942568));
    // 0x19a4dc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x19A4DCu;
    SET_GPR_U32(ctx, 31, 0x19A4E4u);
    ctx->pc = 0x19A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A4DCu;
    // 0x19a4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x19A4DCu, 0x19A4E4u)) {
        return;
    }
    ctx->pc = 0x19A4E4u;
label_19a4e4:
    // 0x19a4e4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x19a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x19a4e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a4ec: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19a4f0: 0xac628130  sw          $v0, -0x7ED0($v1)
    ctx->pc = 0x19a4f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8130u, _value); } while (0);
    // 0x19a4f4: 0x24848138  addiu       $a0, $a0, -0x7EC8
    ctx->pc = 0x19a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934840));
    // 0x19a4f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4fc: 0x24c6a570  addiu       $a2, $a2, -0x5A90
    ctx->pc = 0x19a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944112));
    // 0x19a500: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x19A500u;
    SET_GPR_U32(ctx, 31, 0x19A508u);
    ctx->pc = 0x19A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A500u;
    // 0x19a504: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x19A500u, 0x19A508u)) {
        return;
    }
    ctx->pc = 0x19A508u;
label_19a508:
    // 0x19a508: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19A508u;
    {
        const bool branch_taken_0x19a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A508u;
        // 0x19a50c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a508) {
            ctx->pc = 0x19A560u;
            goto label_19a560;
        }
    }
    ctx->pc = 0x19A510u;
label_19a510:
    // 0x19a510: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a514: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x19A514u;
    SET_GPR_U32(ctx, 31, 0x19A51Cu);
    ctx->pc = 0x19A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A514u;
    // 0x19a518: 0x24848138  addiu       $a0, $a0, -0x7EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x19A514u, 0x19A51Cu)) {
        return;
    }
    ctx->pc = 0x19A51Cu;
label_19a51c:
    // 0x19a51c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a520: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a524: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A524u;
    SET_GPR_U32(ctx, 31, 0x19A52Cu);
    ctx->pc = 0x19A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A524u;
    // 0x19a528: 0x24848128  addiu       $a0, $a0, -0x7ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A524u, 0x19A52Cu)) {
        return;
    }
    ctx->pc = 0x19A52Cu;
label_19a52c:
    // 0x19a52c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a534: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A534u;
    SET_GPR_U32(ctx, 31, 0x19A53Cu);
    ctx->pc = 0x19A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A534u;
    // 0x19a538: 0x24848120  addiu       $a0, $a0, -0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A534u, 0x19A53Cu)) {
        return;
    }
    ctx->pc = 0x19A53Cu;
label_19a53c:
    // 0x19a53c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a544: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A544u;
    SET_GPR_U32(ctx, 31, 0x19A54Cu);
    ctx->pc = 0x19A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A544u;
    // 0x19a548: 0x24848118  addiu       $a0, $a0, -0x7EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A544u, 0x19A54Cu)) {
        return;
    }
    ctx->pc = 0x19A54Cu;
label_19a54c:
    // 0x19a54c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a554: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A554u;
    SET_GPR_U32(ctx, 31, 0x19A55Cu);
    ctx->pc = 0x19A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A554u;
    // 0x19a558: 0x24848110  addiu       $a0, $a0, -0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A554u, 0x19A55Cu)) {
        return;
    }
    ctx->pc = 0x19A55Cu;
label_19a55c:
    // 0x19a55c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a560:
    // 0x19a560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a564: 0x3e00008  jr          $ra
    ctx->pc = 0x19A564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A564u;
        // 0x19a568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A56Cu;
    // 0x19a56c: 0x0  nop
    ctx->pc = 0x19a56cu;
    // NOP
    ctx->pc = 0x19a570u;
}
