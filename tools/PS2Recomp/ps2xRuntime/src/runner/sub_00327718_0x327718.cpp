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

// Function: sub_00327718
// Address: 0x327718 - 0x3278a8
void sub_00327718_0x327718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327718_0x327718");
#endif

    switch (ctx->pc) {
        case 0x327760u: goto label_327760;
        case 0x3277c8u: goto label_3277c8;
        case 0x327834u: goto label_327834;
        case 0x327868u: goto label_327868;
        default: break;
    }

    ctx->pc = 0x327718u;

    // 0x327718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32771c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x327720: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x327724: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x327724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x327728: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32772c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32772cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327730: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327738: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x327738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6885ACu));
    // 0x32773c: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x32773Cu;
    {
        const bool branch_taken_0x32773c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x327740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32773Cu;
        // 0x327740: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32773c) {
            ctx->pc = 0x327890u;
            goto label_327890;
        }
    }
    ctx->pc = 0x327744u;
    // 0x327744: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x327748: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x327748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x32774c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x32774cu;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x327750: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x327750u;
    {
        const bool branch_taken_0x327750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x327750) {
            ctx->pc = 0x327754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327750u;
            // 0x327754: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327784u;
            goto label_327784;
        }
    }
    ctx->pc = 0x327758u;
    // 0x327758: 0xc0c9d44  jal         func_327510
    ctx->pc = 0x327758u;
    SET_GPR_U32(ctx, 31, 0x327760u);
    ctx->pc = 0x32775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327758u;
    // 0x32775c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327510u, 0x327758u, 0x327760u)) {
        return;
    }
    ctx->pc = 0x327760u;
label_327760:
    // 0x327760: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x327760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x327764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327768: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x327768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x32776c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32776cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327770: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x327770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x327774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327778: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32777c: 0x80c9d40  j           func_327500
    ctx->pc = 0x32777Cu;
    ctx->pc = 0x327780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32777Cu;
    // 0x327780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    sub_00327500_0x327500(rdram, ctx, runtime); return;
    ctx->pc = 0x327784u;
label_327784:
    // 0x327784: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x327784u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x327788: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x327788u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x32778c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x32778cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x327790: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x327790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327794: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x327794u;
    {
        const bool branch_taken_0x327794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x327798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327794u;
        // 0x327798: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327794) {
            ctx->pc = 0x3277FCu;
            goto label_3277fc;
        }
    }
    ctx->pc = 0x32779Cu;
    // 0x32779c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x32779cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3277a0: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x3277a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x3277a4: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3277a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3277a8: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3277a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3277ac: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3277acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3277b0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3277b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3277b4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3277b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3277b8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3277B8u;
    {
        const bool branch_taken_0x3277b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277B8u;
        // 0x3277bc: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277b8) {
            ctx->pc = 0x3277FCu;
            goto label_3277fc;
        }
    }
    ctx->pc = 0x3277C0u;
    // 0x3277c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3277c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3277c4: 0x0  nop
    ctx->pc = 0x3277c4u;
    // NOP
label_3277c8:
    // 0x3277c8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3277c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3277cc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3277CCu;
    {
        const bool branch_taken_0x3277cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277CCu;
        // 0x3277d0: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277cc) {
            ctx->pc = 0x327800u;
            goto label_327800;
        }
    }
    ctx->pc = 0x3277D4u;
    // 0x3277d4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3277d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3277d8: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3277d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3277dc: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3277dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3277e0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3277e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3277e4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3277e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3277e8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3277e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3277ec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3277ECu;
    {
        const bool branch_taken_0x3277ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3277ec) {
            ctx->pc = 0x3277F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3277ECu;
            // 0x3277f0: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327804u;
            goto label_327804;
        }
    }
    ctx->pc = 0x3277F4u;
    // 0x3277f4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3277F4u;
    {
        const bool branch_taken_0x3277f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F4u;
        // 0x3277f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277f4) {
            ctx->pc = 0x3277C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3277c8;
        }
    }
    ctx->pc = 0x3277FCu;
label_3277fc:
    // 0x3277fc: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x3277fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_327800:
    // 0x327800: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x327800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_327804:
    // 0x327804: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x327804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x327808: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x327808u;
    {
        const bool branch_taken_0x327808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327808u;
        // 0x32780c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327808) {
            ctx->pc = 0x327858u;
            goto label_327858;
        }
    }
    ctx->pc = 0x327810u;
    // 0x327810: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x327814: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x327814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x327818: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x327818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x32781c: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x32781cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x327820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327824: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x327824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x327828: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x327828u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32782c: 0xc0c9d44  jal         func_327510
    ctx->pc = 0x32782Cu;
    SET_GPR_U32(ctx, 31, 0x327834u);
    ctx->pc = 0x327830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32782Cu;
    // 0x327830: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327510u, 0x32782Cu, 0x327834u)) {
        return;
    }
    ctx->pc = 0x327834u;
label_327834:
    // 0x327834: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x327834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x327838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32783c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x32783cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x327840: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327844: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x327844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x327848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32784c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32784cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327850: 0x80c9d40  j           func_327500
    ctx->pc = 0x327850u;
    ctx->pc = 0x327854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327850u;
    // 0x327854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    sub_00327500_0x327500(rdram, ctx, runtime); return;
    ctx->pc = 0x327858u;
label_327858:
    // 0x327858: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x327858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x32785c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x32785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x327860: 0xc0c9d40  jal         func_327500
    ctx->pc = 0x327860u;
    SET_GPR_U32(ctx, 31, 0x327868u);
    ctx->pc = 0x327864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327860u;
    // 0x327864: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x327860u, 0x327868u)) {
        return;
    }
    ctx->pc = 0x327868u;
label_327868:
    // 0x327868: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x327868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32786c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327870: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x327870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x327874: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327878: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32787c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32787cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x327880: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x327880u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x327884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327888: 0x80c9d44  j           func_327510
    ctx->pc = 0x327888u;
    ctx->pc = 0x32788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327888u;
    // 0x32788c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327510u;
    sub_00327510_0x327510(rdram, ctx, runtime); return;
    ctx->pc = 0x327890u;
label_327890:
    // 0x327890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327894: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327898: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32789c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32789cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3278a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3278A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A0u;
        // 0x3278a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3278A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3278A8u;
}
