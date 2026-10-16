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

// Function: sub_00203948
// Address: 0x203948 - 0x203a40
void sub_00203948_0x203948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203948_0x203948");
#endif

    switch (ctx->pc) {
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        default: break;
    }

    ctx->pc = 0x203948u;

label_203948:
    // 0x203948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20394c:
    // 0x20394c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_203950:
    // 0x203950: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x203950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_203954:
    // 0x203954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203958:
    // 0x203958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20395c:
    // 0x20395c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_203960:
    // 0x203960: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_203964:
    // 0x203964: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_203968:
    if (ctx->pc == 0x203968u) {
        ctx->pc = 0x203968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203964u;
        // 0x203968: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20396Cu;
        goto label_20396c;
    }
    ctx->pc = 0x203964u;
    {
        const bool branch_taken_0x203964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203964u;
        // 0x203968: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203964) {
            ctx->pc = 0x203A20u;
            goto label_203a20;
        }
    }
    ctx->pc = 0x20396Cu;
label_20396c:
    // 0x20396c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203970:
    // 0x203970: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203974:
    // 0x203974: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_203978:
    // 0x203978: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20397c:
    // 0x20397c: 0x40f809  jalr        $v0
label_203980:
    if (ctx->pc == 0x203980u) {
        ctx->pc = 0x203980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20397Cu;
        // 0x203980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203984u;
        goto label_203984;
    }
    ctx->pc = 0x20397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203984u);
        ctx->pc = 0x203980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20397Cu;
        // 0x203980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20397Cu, 0x203984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203984u;
label_203984:
    // 0x203984: 0x56420024  bnel        $s2, $v0, . + 4 + (0x24 << 2)
label_203988:
    if (ctx->pc == 0x203988u) {
        ctx->pc = 0x203988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203984u;
        // 0x203988: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20398Cu;
        goto label_20398c;
    }
    ctx->pc = 0x203984u;
    {
        const bool branch_taken_0x203984 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x203984) {
            ctx->pc = 0x203988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203984u;
            // 0x203988: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A18u;
            goto label_203a18;
        }
    }
    ctx->pc = 0x20398Cu;
label_20398c:
    // 0x20398c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x20398cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_203990:
    // 0x203990: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_203994:
    // 0x203994: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_203998:
    if (ctx->pc == 0x203998u) {
        ctx->pc = 0x203998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203994u;
        // 0x203998: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20399Cu;
        goto label_20399c;
    }
    ctx->pc = 0x203994u;
    {
        const bool branch_taken_0x203994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203994) {
            ctx->pc = 0x203998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203994u;
            // 0x203998: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2039C4u;
            goto label_2039c4;
        }
    }
    ctx->pc = 0x20399Cu;
label_20399c:
    // 0x20399c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2039a0:
    // 0x2039a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2039a4:
    // 0x2039a4: 0x0  nop
    ctx->pc = 0x2039a4u;
    // NOP
label_2039a8:
    // 0x2039a8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2039ac:
    if (ctx->pc == 0x2039ACu) {
        ctx->pc = 0x2039B0u;
        goto label_2039b0;
    }
    ctx->pc = 0x2039A8u;
    {
        const bool branch_taken_0x2039a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2039a8) {
            ctx->pc = 0x2039C4u;
            goto label_2039c4;
        }
    }
    ctx->pc = 0x2039B0u;
label_2039b0:
    // 0x2039b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2039b4:
    // 0x2039b4: 0x0  nop
    ctx->pc = 0x2039b4u;
    // NOP
label_2039b8:
    // 0x2039b8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_2039bc:
    if (ctx->pc == 0x2039BCu) {
        ctx->pc = 0x2039BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B8u;
        // 0x2039bc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039C0u;
        goto label_2039c0;
    }
    ctx->pc = 0x2039B8u;
    {
        const bool branch_taken_0x2039b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2039b8) {
            ctx->pc = 0x2039BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039B8u;
            // 0x2039bc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2039A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2039a8;
        }
    }
    ctx->pc = 0x2039C0u;
label_2039c0:
    // 0x2039c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2039c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2039c4:
    // 0x2039c4: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_2039c8:
    if (ctx->pc == 0x2039C8u) {
        ctx->pc = 0x2039C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039C4u;
        // 0x2039c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039CCu;
        goto label_2039cc;
    }
    ctx->pc = 0x2039C4u;
    {
        const bool branch_taken_0x2039c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039c4) {
            ctx->pc = 0x2039C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039C4u;
            // 0x2039c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A24u;
            goto label_203a24;
        }
    }
    ctx->pc = 0x2039CCu;
label_2039cc:
    // 0x2039cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2039ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2039d0:
    // 0x2039d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2039d4:
    if (ctx->pc == 0x2039D4u) {
        ctx->pc = 0x2039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D0u;
        // 0x2039d4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039D8u;
        goto label_2039d8;
    }
    ctx->pc = 0x2039D0u;
    {
        const bool branch_taken_0x2039d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D0u;
        // 0x2039d4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d0) {
            ctx->pc = 0x2039E0u;
            goto label_2039e0;
        }
    }
    ctx->pc = 0x2039D8u;
label_2039d8:
    // 0x2039d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x2039E4u;
            goto label_2039e4;
        }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2039e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2039e4:
    // 0x2039e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2039e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2039e8:
    // 0x2039e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2039ec:
    if (ctx->pc == 0x2039ECu) {
        ctx->pc = 0x2039ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E8u;
        // 0x2039ec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039F0u;
        goto label_2039f0;
    }
    ctx->pc = 0x2039E8u;
    {
        const bool branch_taken_0x2039e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2039ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E8u;
        // 0x2039ec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039e8) {
            ctx->pc = 0x2039F8u;
            goto label_2039f8;
        }
    }
    ctx->pc = 0x2039F0u;
label_2039f0:
    // 0x2039f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2039f4:
    if (ctx->pc == 0x2039F4u) {
        ctx->pc = 0x2039F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F0u;
        // 0x2039f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039F8u;
        goto label_2039f8;
    }
    ctx->pc = 0x2039F0u;
    {
        const bool branch_taken_0x2039f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F0u;
        // 0x2039f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039f0) {
            ctx->pc = 0x2039FCu;
            goto label_2039fc;
        }
    }
    ctx->pc = 0x2039F8u;
label_2039f8:
    // 0x2039f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2039f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2039fc:
    // 0x2039fc: 0xc0808b8  jal         func_2022E0
label_203a00:
    if (ctx->pc == 0x203A00u) {
        ctx->pc = 0x203A04u;
        goto label_203a04;
    }
    ctx->pc = 0x2039FCu;
    SET_GPR_U32(ctx, 31, 0x203A04u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2039FCu, 0x203A04u)) {
        return;
    }
    ctx->pc = 0x203A04u;
label_203a04:
    // 0x203a04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203a08:
    // 0x203a08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_203a0c:
    // 0x203a0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203a10:
    // 0x203a10: 0x10000004  b           . + 4 + (0x4 << 2)
label_203a14:
    if (ctx->pc == 0x203A14u) {
        ctx->pc = 0x203A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A10u;
        // 0x203a14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A18u;
        goto label_203a18;
    }
    ctx->pc = 0x203A10u;
    {
        const bool branch_taken_0x203a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A10u;
        // 0x203a14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a10) {
            ctx->pc = 0x203A24u;
            goto label_203a24;
        }
    }
    ctx->pc = 0x203A18u;
label_203a18:
    // 0x203a18: 0x5620ffd5  bnel        $s1, $zero, . + 4 + (-0x2B << 2)
label_203a1c:
    if (ctx->pc == 0x203A1Cu) {
        ctx->pc = 0x203A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A18u;
        // 0x203a1c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A20u;
        goto label_203a20;
    }
    ctx->pc = 0x203A18u;
    {
        const bool branch_taken_0x203a18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x203a18) {
            ctx->pc = 0x203A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A18u;
            // 0x203a1c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203970;
        }
    }
    ctx->pc = 0x203A20u;
label_203a20:
    // 0x203a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x203a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203a24:
    // 0x203a24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x203a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203a28:
    // 0x203a28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x203a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203a2c:
    // 0x203a2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x203a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203a30:
    // 0x203a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203a34:
    // 0x203a34: 0x3e00008  jr          $ra
label_203a38:
    if (ctx->pc == 0x203A38u) {
        ctx->pc = 0x203A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A34u;
        // 0x203a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A3Cu;
        goto label_203a3c;
    }
    ctx->pc = 0x203A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A34u;
        // 0x203a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A3Cu;
label_203a3c:
    // 0x203a3c: 0x0  nop
    ctx->pc = 0x203a3cu;
    // NOP
    ctx->pc = 0x203a40u;
}
