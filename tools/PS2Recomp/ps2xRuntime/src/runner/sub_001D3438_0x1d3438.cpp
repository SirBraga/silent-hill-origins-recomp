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

// Function: sub_001D3438
// Address: 0x1d3438 - 0x1d3598
void sub_001D3438_0x1d3438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3438_0x1d3438");
#endif

    switch (ctx->pc) {
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d349cu: goto label_1d349c;
        case 0x1d34b8u: goto label_1d34b8;
        case 0x1d34d4u: goto label_1d34d4;
        case 0x1d34f0u: goto label_1d34f0;
        case 0x1d3518u: goto label_1d3518;
        case 0x1d3528u: goto label_1d3528;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3560u: goto label_1d3560;
        case 0x1d357cu: goto label_1d357c;
        default: break;
    }

    ctx->pc = 0x1d3438u;

    // 0x1d3438: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x1d3438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x1d343c: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x1d343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
    // 0x1d3440: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x1d3440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
    // 0x1d3444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d344c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d3450: 0x7fb20410  sq          $s2, 0x410($sp)
    ctx->pc = 0x1d3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 18));
    // 0x1d3454: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d3458: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D3458u;
    SET_GPR_U32(ctx, 31, 0x1D3460u);
    ctx->pc = 0x1D345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3458u;
    // 0x1d345c: 0x24a50f18  addiu       $a1, $a1, 0xF18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D3458u, 0x1D3460u)) {
        return;
    }
    ctx->pc = 0x1D3460u;
label_1d3460:
    // 0x1d3460: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d3460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3464: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d3468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d346c: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D346Cu;
    SET_GPR_U32(ctx, 31, 0x1D3474u);
    ctx->pc = 0x1D3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346Cu;
    // 0x1d3470: 0x24a50f38  addiu       $a1, $a1, 0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D346Cu, 0x1D3474u)) {
        return;
    }
    ctx->pc = 0x1D3474u;
label_1d3474:
    // 0x1d3474: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d3474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d3478: 0x10720008  beq         $v1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3478u;
    {
        const bool branch_taken_0x1d3478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3478u;
        // 0x1d347c: 0x3c06006a  lui         $a2, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3478) {
            ctx->pc = 0x1D349Cu;
            goto label_1d349c;
        }
    }
    ctx->pc = 0x1D3480u;
    // 0x1d3480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3484: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1d3484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1d3488: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d3488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d348c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d348cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3494: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3494u;
    SET_GPR_U32(ctx, 31, 0x1D349Cu);
    ctx->pc = 0x1D3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3494u;
    // 0x1d3498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3494u, 0x1D349Cu)) {
        return;
    }
    ctx->pc = 0x1D349Cu;
label_1d349c:
    // 0x1d349c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d34a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d34a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d34a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34b0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D34B0u;
    SET_GPR_U32(ctx, 31, 0x1D34B8u);
    ctx->pc = 0x1D34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34B0u;
    // 0x1d34b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D34B0u, 0x1D34B8u)) {
        return;
    }
    ctx->pc = 0x1D34B8u;
label_1d34b8:
    // 0x1d34b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d34c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d34c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d34c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34cc: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D34CCu;
    SET_GPR_U32(ctx, 31, 0x1D34D4u);
    ctx->pc = 0x1D34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34CCu;
    // 0x1d34d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D34CCu, 0x1D34D4u)) {
        return;
    }
    ctx->pc = 0x1D34D4u;
label_1d34d4:
    // 0x1d34d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d34dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d34e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34e8: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D34E8u;
    SET_GPR_U32(ctx, 31, 0x1D34F0u);
    ctx->pc = 0x1D34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34E8u;
    // 0x1d34ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D34E8u, 0x1D34F0u)) {
        return;
    }
    ctx->pc = 0x1D34F0u;
label_1d34f0:
    // 0x1d34f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d34f4: 0x10720008  beq         $v1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34F4u;
    {
        const bool branch_taken_0x1d34f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34F4u;
        // 0x1d34f8: 0x3c06006a  lui         $a2, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34f4) {
            ctx->pc = 0x1D3518u;
            goto label_1d3518;
        }
    }
    ctx->pc = 0x1D34FCu;
    // 0x1d34fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3500: 0x24c60f68  addiu       $a2, $a2, 0xF68
    ctx->pc = 0x1d3500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3944));
    // 0x1d3504: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d3504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d350c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d350cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3510: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3510u;
    SET_GPR_U32(ctx, 31, 0x1D3518u);
    ctx->pc = 0x1D3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3510u;
    // 0x1d3514: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3510u, 0x1D3518u)) {
        return;
    }
    ctx->pc = 0x1D3518u;
label_1d3518:
    // 0x1d3518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3520: 0xc0758fe  jal         func_1D63F8
    ctx->pc = 0x1D3520u;
    SET_GPR_U32(ctx, 31, 0x1D3528u);
    ctx->pc = 0x1D3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3520u;
    // 0x1d3524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D63F8u, 0x1D3520u, 0x1D3528u)) {
        return;
    }
    ctx->pc = 0x1D3528u;
label_1d3528:
    // 0x1d3528: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d352c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3530: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d3534: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d3538: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d3538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d353c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D353Cu;
    SET_GPR_U32(ctx, 31, 0x1D3544u);
    ctx->pc = 0x1D3540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353Cu;
    // 0x1d3540: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D353Cu, 0x1D3544u)) {
        return;
    }
    ctx->pc = 0x1D3544u;
label_1d3544:
    // 0x1d3544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3548: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d354c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d3550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3558: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3558u;
    SET_GPR_U32(ctx, 31, 0x1D3560u);
    ctx->pc = 0x1D355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3558u;
    // 0x1d355c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3558u, 0x1D3560u)) {
        return;
    }
    ctx->pc = 0x1D3560u;
label_1d3560:
    // 0x1d3560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3564: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3568: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d356c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d356cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3574: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3574u;
    SET_GPR_U32(ctx, 31, 0x1D357Cu);
    ctx->pc = 0x1D3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3574u;
    // 0x1d3578: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3574u, 0x1D357Cu)) {
        return;
    }
    ctx->pc = 0x1D357Cu;
label_1d357c:
    // 0x1d357c: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x1d357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1d3580: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x1d3580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1d3584: 0x7bb20410  lq          $s2, 0x410($sp)
    ctx->pc = 0x1d3584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d3588: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d3588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d358c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D358Cu;
        // 0x1d3590: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3594u;
    // 0x1d3594: 0x0  nop
    ctx->pc = 0x1d3594u;
    // NOP
    ctx->pc = 0x1d3598u;
}
