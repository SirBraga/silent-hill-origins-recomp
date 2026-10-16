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

// Function: sub_002A0490
// Address: 0x2a0490 - 0x2a05c0
void sub_002A0490_0x2a0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0490_0x2a0490");
#endif

    switch (ctx->pc) {
        case 0x2a04d0u: goto label_2a04d0;
        default: break;
    }

    ctx->pc = 0x2a0490u;

    // 0x2a0490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a0494: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a0498: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a049c: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x2a049cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2a04a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a04a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a04a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a04a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a04b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a04b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a04b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a04bc: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x2a04bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a04c0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2a04c4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a04c8: 0xc0a7f14  jal         func_29FC50
    ctx->pc = 0x2A04C8u;
    SET_GPR_U32(ctx, 31, 0x2A04D0u);
    ctx->pc = 0x2A04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04C8u;
    // 0x2a04cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29FC50u, 0x2A04C8u, 0x2A04D0u)) {
        return;
    }
    ctx->pc = 0x2A04D0u;
label_2a04d0:
    // 0x2a04d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a04d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a04d8: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x2a04d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a04dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a04e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A04E0u;
    {
        const bool branch_taken_0x2a04e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04E0u;
        // 0x2a04e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04e0) {
            ctx->pc = 0x2A0528u;
            goto label_2a0528;
        }
    }
    ctx->pc = 0x2A04E8u;
    // 0x2a04e8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a04ec: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2a04ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2a04f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a04f4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x2a04f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a04f8: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a04fc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a0500: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0500u;
    {
        const bool branch_taken_0x2a0500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0500u;
        // 0x2a0504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0500) {
            ctx->pc = 0x2A050Cu;
            goto label_2a050c;
        }
    }
    ctx->pc = 0x2A0508u;
    // 0x2a0508: 0x8e27fffc  lw          $a3, -0x4($s1)
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_2a050c:
    // 0x2a050c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0510: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x2a0514: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a0514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a0518: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x2a0518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x2a051c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x2a051cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a0520: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A0520u;
    {
        const bool branch_taken_0x2a0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0520u;
        // 0x2a0524: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0520) {
            ctx->pc = 0x2A058Cu;
            goto label_2a058c;
        }
    }
    ctx->pc = 0x2A0528u;
label_2a0528:
    // 0x2a0528: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x2a0528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a052c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A052Cu;
    {
        const bool branch_taken_0x2a052c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A052Cu;
        // 0x2a0530: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a052c) {
            ctx->pc = 0x2A053Cu;
            goto label_2a053c;
        }
    }
    ctx->pc = 0x2A0534u;
    // 0x2a0534: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2a0538: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2a0538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a053c:
    // 0x2a053c: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x2a053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x2a0540: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A0540u;
    {
        const bool branch_taken_0x2a0540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0540u;
        // 0x2a0544: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0540) {
            ctx->pc = 0x2A0580u;
            goto label_2a0580;
        }
    }
    ctx->pc = 0x2A0548u;
    // 0x2a0548: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2a0548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2a054c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x2a054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a0550: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x2a0550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    // 0x2a0554: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a0558: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x2a0558u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a055c: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x2a055cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2a0560: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0560u;
    {
        const bool branch_taken_0x2a0560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0560u;
        // 0x2a0564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0560) {
            ctx->pc = 0x2A056Cu;
            goto label_2a056c;
        }
    }
    ctx->pc = 0x2A0568u;
    // 0x2a0568: 0x8e32fffc  lw          $s2, -0x4($s1)
    ctx->pc = 0x2a0568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_2a056c:
    // 0x2a056c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x2a056cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2a0570: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x2a0570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x2a0574: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a0578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0578u;
    {
        const bool branch_taken_0x2a0578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0578u;
        // 0x2a057c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0578) {
            ctx->pc = 0x2A058Cu;
            goto label_2a058c;
        }
    }
    ctx->pc = 0x2A0580u;
label_2a0580:
    // 0x2a0580: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x2a0580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x2a0584: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a0584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0588: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x2a0588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2a058c:
    // 0x2a058c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a058cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a0590: 0x4a03c  dsll32      $s4, $a0, 0
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a0594: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a0594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a0598: 0x2831025  or          $v0, $s4, $v1
    ctx->pc = 0x2a0598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x2a059c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a05a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a05a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a05a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a05a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a05a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a05a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a05ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a05acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a05b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a05b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a05b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A05B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05B4u;
        // 0x2a05b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A05BCu;
    // 0x2a05bc: 0x0  nop
    ctx->pc = 0x2a05bcu;
    // NOP
    ctx->pc = 0x2a05c0u;
}
