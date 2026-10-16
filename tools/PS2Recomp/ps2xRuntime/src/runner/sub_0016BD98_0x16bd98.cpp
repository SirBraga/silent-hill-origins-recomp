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

// Function: sub_0016BD98
// Address: 0x16bd98 - 0x16bea0
void sub_0016BD98_0x16bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD98_0x16bd98");
#endif

    switch (ctx->pc) {
        case 0x16bdb4u: goto label_16bdb4;
        case 0x16bde4u: goto label_16bde4;
        case 0x16bdf4u: goto label_16bdf4;
        case 0x16be08u: goto label_16be08;
        case 0x16be14u: goto label_16be14;
        case 0x16be28u: goto label_16be28;
        case 0x16be3cu: goto label_16be3c;
        case 0x16be64u: goto label_16be64;
        case 0x16be6cu: goto label_16be6c;
        case 0x16be8cu: goto label_16be8c;
        default: break;
    }

    ctx->pc = 0x16bd98u;

    // 0x16bd98: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16bd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16bd9c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16bda0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x16bda4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16bda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bda8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16bdac: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16BDACu;
    SET_GPR_U32(ctx, 31, 0x16BDB4u);
    ctx->pc = 0x16BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDACu;
    // 0x16bdb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16BDACu, 0x16BDB4u)) {
        return;
    }
    ctx->pc = 0x16BDB4u;
label_16bdb4:
    // 0x16bdb4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x16bdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bdb8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x16bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16bdbc: 0x56020034  bnel        $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x16BDBCu;
    {
        const bool branch_taken_0x16bdbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16bdbc) {
            ctx->pc = 0x16BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BDBCu;
            // 0x16bdc0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BE90u;
            goto label_16be90;
        }
    }
    ctx->pc = 0x16BDC4u;
    // 0x16bdc4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16bdc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16bdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdcc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BDCCu;
    {
        const bool branch_taken_0x16bdcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDCCu;
        // 0x16bdd0: 0x244548b0  addiu       $a1, $v0, 0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdcc) {
            ctx->pc = 0x16BDD8u;
            goto label_16bdd8;
        }
    }
    ctx->pc = 0x16BDD4u;
    // 0x16bdd4: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x16bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16bdd8:
    // 0x16bdd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bddc: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16BDDCu;
    SET_GPR_U32(ctx, 31, 0x16BDE4u);
    ctx->pc = 0x16BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDDCu;
    // 0x16bde0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16BDDCu, 0x16BDE4u)) {
        return;
    }
    ctx->pc = 0x16BDE4u;
label_16bde4:
    // 0x16bde4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdec: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x16BDECu;
    SET_GPR_U32(ctx, 31, 0x16BDF4u);
    ctx->pc = 0x16BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDECu;
    // 0x16bdf0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x16BDECu, 0x16BDF4u)) {
        return;
    }
    ctx->pc = 0x16BDF4u;
label_16bdf4:
    // 0x16bdf4: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x16bdf8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x16bdfc: 0x24a548d0  addiu       $a1, $a1, 0x48D0
    ctx->pc = 0x16bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18640));
    // 0x16be00: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x16BE00u;
    SET_GPR_U32(ctx, 31, 0x16BE08u);
    ctx->pc = 0x16BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE00u;
    // 0x16be04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x16BE00u, 0x16BE08u)) {
        return;
    }
    ctx->pc = 0x16BE08u;
label_16be08:
    // 0x16be08: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x16be08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x16be0c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x16BE0Cu;
    SET_GPR_U32(ctx, 31, 0x16BE14u);
    ctx->pc = 0x16BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE0Cu;
    // 0x16be10: 0x8c7086c0  lw          $s0, -0x7940($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x16BE0Cu, 0x16BE14u)) {
        return;
    }
    ctx->pc = 0x16BE14u;
label_16be14:
    // 0x16be14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BE14u;
    {
        const bool branch_taken_0x16be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE14u;
        // 0x16be18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be14) {
            ctx->pc = 0x16BE3Cu;
            goto label_16be3c;
        }
    }
    ctx->pc = 0x16BE1Cu;
    // 0x16be1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16be1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be20: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x16BE20u;
    SET_GPR_U32(ctx, 31, 0x16BE28u);
    ctx->pc = 0x16BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE20u;
    // 0x16be24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x16BE20u, 0x16BE28u)) {
        return;
    }
    ctx->pc = 0x16BE28u;
label_16be28:
    // 0x16be28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BE28u;
    {
        const bool branch_taken_0x16be28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be28) {
            ctx->pc = 0x16BE3Cu;
            goto label_16be3c;
        }
    }
    ctx->pc = 0x16BE30u;
    // 0x16be30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16be30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be34: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x16BE34u;
    SET_GPR_U32(ctx, 31, 0x16BE3Cu);
    ctx->pc = 0x16BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE34u;
    // 0x16be38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x16BE34u, 0x16BE3Cu)) {
        return;
    }
    ctx->pc = 0x16BE3Cu;
label_16be3c:
    // 0x16be3c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16be40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BE40u;
    {
        const bool branch_taken_0x16be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE40u;
        // 0x16be44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be40) {
            ctx->pc = 0x16BE64u;
            goto label_16be64;
        }
    }
    ctx->pc = 0x16BE48u;
    // 0x16be48: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x16be4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BE4Cu;
    {
        const bool branch_taken_0x16be4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE4Cu;
        // 0x16be50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be4c) {
            ctx->pc = 0x16BE64u;
            goto label_16be64;
        }
    }
    ctx->pc = 0x16BE54u;
    // 0x16be54: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x16be58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16be58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16be5c: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x16BE5Cu;
    SET_GPR_U32(ctx, 31, 0x16BE64u);
    ctx->pc = 0x16BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE5Cu;
    // 0x16be60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x16BE5Cu, 0x16BE64u)) {
        return;
    }
    ctx->pc = 0x16BE64u;
label_16be64:
    // 0x16be64: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x16BE64u;
    SET_GPR_U32(ctx, 31, 0x16BE6Cu);
    ctx->pc = 0x16BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE64u;
    // 0x16be68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x16BE64u, 0x16BE6Cu)) {
        return;
    }
    ctx->pc = 0x16BE6Cu;
label_16be6c:
    // 0x16be6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16be6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16be70: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16be70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16be74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16be78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16be78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16be7c: 0x0  nop
    ctx->pc = 0x16be7cu;
    // NOP
    // 0x16be80: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x16be80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x16be84: 0xc05f910  jal         func_17E440
    ctx->pc = 0x16BE84u;
    SET_GPR_U32(ctx, 31, 0x16BE8Cu);
    ctx->pc = 0x16BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE84u;
    // 0x16be88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x16BE84u, 0x16BE8Cu)) {
        return;
    }
    ctx->pc = 0x16BE8Cu;
label_16be8c:
    // 0x16be8c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16be8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16be90:
    // 0x16be90: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16be90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16be94: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16be98: 0x3e00008  jr          $ra
    ctx->pc = 0x16BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE98u;
        // 0x16be9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BEA0u;
}
