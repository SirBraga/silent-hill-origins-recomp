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

// Function: sub_00276700
// Address: 0x276700 - 0x276868
void sub_00276700_0x276700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276700_0x276700");
#endif

    switch (ctx->pc) {
        case 0x276730u: goto label_276730;
        case 0x276758u: goto label_276758;
        case 0x27678cu: goto label_27678c;
        case 0x2767b4u: goto label_2767b4;
        case 0x2767d0u: goto label_2767d0;
        case 0x276800u: goto label_276800;
        default: break;
    }

    ctx->pc = 0x276700u;

    // 0x276700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276704: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x276704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x276708: 0x3c070027  lui         $a3, 0x27
    ctx->pc = 0x276708u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)39 << 16));
    // 0x27670c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x276710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x276714: 0x24c66868  addiu       $a2, $a2, 0x6868
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26728));
    // 0x276718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x276718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27671c: 0x24e76890  addiu       $a3, $a3, 0x6890
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26768));
    // 0x276720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276724: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276728: 0xc0895e6  jal         func_225798
    ctx->pc = 0x276728u;
    SET_GPR_U32(ctx, 31, 0x276730u);
    ctx->pc = 0x27672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276728u;
    // 0x27672c: 0x2405011d  addiu       $a1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x276728u, 0x276730u)) {
        return;
    }
    ctx->pc = 0x276730u;
label_276730:
    // 0x276730: 0x2802a  slt         $s0, $zero, $v0
    ctx->pc = 0x276730u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x276734: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x276734u;
    {
        const bool branch_taken_0x276734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x276738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276734u;
        // 0x276738: 0xaf8287cc  sw          $v0, -0x7834($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276734) {
            ctx->pc = 0x27680Cu;
            goto label_27680c;
        }
    }
    ctx->pc = 0x27673Cu;
    // 0x27673c: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x27673cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x276740: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x276740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276744: 0x24c66b30  addiu       $a2, $a2, 0x6B30
    ctx->pc = 0x276744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27440));
    // 0x276748: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x27674c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27674cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276750: 0xc09579e  jal         func_255E78
    ctx->pc = 0x276750u;
    SET_GPR_U32(ctx, 31, 0x276758u);
    ctx->pc = 0x276754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276750u;
    // 0x276754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x276750u, 0x276758u)) {
        return;
    }
    ctx->pc = 0x276758u;
label_276758:
    // 0x276758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27675c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27675Cu;
    {
        const bool branch_taken_0x27675c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x276760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27675Cu;
        // 0x276760: 0xaf8287d0  sw          $v0, -0x7830($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27675c) {
            ctx->pc = 0x27680Cu;
            goto label_27680c;
        }
    }
    ctx->pc = 0x276764u;
    // 0x276764: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276768: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x276768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27676c: 0x245168f0  addiu       $s1, $v0, 0x68F0
    ctx->pc = 0x27676cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26864));
    // 0x276770: 0x247268a8  addiu       $s2, $v1, 0x68A8
    ctx->pc = 0x276770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 26792));
    // 0x276774: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x276774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276778: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x27677c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27677cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276780: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x276780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276784: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x276784u;
    SET_GPR_U32(ctx, 31, 0x27678Cu);
    ctx->pc = 0x276788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276784u;
    // 0x276788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x276784u, 0x27678Cu)) {
        return;
    }
    ctx->pc = 0x27678Cu;
label_27678c:
    // 0x27678c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27678Cu;
    {
        const bool branch_taken_0x27678c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x276790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27678Cu;
        // 0x276790: 0xaf8287d8  sw          $v0, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27678c) {
            ctx->pc = 0x27680Cu;
            goto label_27680c;
        }
    }
    ctx->pc = 0x276794u;
    // 0x276794: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x276794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x276798: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x276798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x27679c: 0x3c070027  lui         $a3, 0x27
    ctx->pc = 0x27679cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)39 << 16));
    // 0x2767a0: 0x24a569a8  addiu       $a1, $a1, 0x69A8
    ctx->pc = 0x2767a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27048));
    // 0x2767a4: 0x24c66930  addiu       $a2, $a2, 0x6930
    ctx->pc = 0x2767a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26928));
    // 0x2767a8: 0x24e76900  addiu       $a3, $a3, 0x6900
    ctx->pc = 0x2767a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26880));
    // 0x2767ac: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x2767ACu;
    SET_GPR_U32(ctx, 31, 0x2767B4u);
    ctx->pc = 0x2767B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767ACu;
    // 0x2767b0: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x2767ACu, 0x2767B4u)) {
        return;
    }
    ctx->pc = 0x2767B4u;
label_2767b4:
    // 0x2767b4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2767B4u;
    {
        const bool branch_taken_0x2767b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2767B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767B4u;
        // 0x2767b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767b4) {
            ctx->pc = 0x27680Cu;
            goto label_27680c;
        }
    }
    ctx->pc = 0x2767BCu;
    // 0x2767bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2767bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2767c4: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x2767c8: 0xc095b24  jal         func_256C90
    ctx->pc = 0x2767C8u;
    SET_GPR_U32(ctx, 31, 0x2767D0u);
    ctx->pc = 0x2767CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767C8u;
    // 0x2767cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x2767C8u, 0x2767D0u)) {
        return;
    }
    ctx->pc = 0x2767D0u;
label_2767d0:
    // 0x2767d0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2767d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2767d4: 0xaf8287d4  sw          $v0, -0x782C($gp)
    ctx->pc = 0x2767d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936532), GPR_U32(ctx, 2));
    // 0x2767d8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2767dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2767DCu;
    {
        const bool branch_taken_0x2767dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767DCu;
        // 0x2767e0: 0x3c050027  lui         $a1, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767dc) {
            ctx->pc = 0x276808u;
            goto label_276808;
        }
    }
    ctx->pc = 0x2767E4u;
    // 0x2767e4: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x2767e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
    // 0x2767e8: 0x3c070027  lui         $a3, 0x27
    ctx->pc = 0x2767e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)39 << 16));
    // 0x2767ec: 0x24a569a8  addiu       $a1, $a1, 0x69A8
    ctx->pc = 0x2767ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27048));
    // 0x2767f0: 0x24c66930  addiu       $a2, $a2, 0x6930
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26928));
    // 0x2767f4: 0x24e76900  addiu       $a3, $a3, 0x6900
    ctx->pc = 0x2767f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26880));
    // 0x2767f8: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x2767F8u;
    SET_GPR_U32(ctx, 31, 0x276800u);
    ctx->pc = 0x2767FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767F8u;
    // 0x2767fc: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x2767F8u, 0x276800u)) {
        return;
    }
    ctx->pc = 0x276800u;
label_276800:
    // 0x276800: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x276800u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x276804: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_276808:
    // 0x276808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27680c:
    // 0x27680c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27680cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276814: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x276814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276818: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x276818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27681c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276820: 0x3e00008  jr          $ra
    ctx->pc = 0x276820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276820u;
        // 0x276824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276828u;
    // 0x276828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x276828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27682c: 0x0  nop
    ctx->pc = 0x27682cu;
    // NOP
    // 0x276830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x276830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276834: 0x0  nop
    ctx->pc = 0x276834u;
    // NOP
    // 0x276838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27683c: 0x0  nop
    ctx->pc = 0x27683cu;
    // NOP
    // 0x276840: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x276840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x276844: 0x0  nop
    ctx->pc = 0x276844u;
    // NOP
    // 0x276848: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x276848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x27684c: 0x0  nop
    ctx->pc = 0x27684cu;
    // NOP
    // 0x276850: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276854: 0x0  nop
    ctx->pc = 0x276854u;
    // NOP
    // 0x276858: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x276858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27685c: 0x0  nop
    ctx->pc = 0x27685cu;
    // NOP
    // 0x276860: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x276860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x276864: 0x0  nop
    ctx->pc = 0x276864u;
    // NOP
    ctx->pc = 0x276868u;
}
