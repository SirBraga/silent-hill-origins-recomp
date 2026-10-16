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

// Function: sub_001CFCD8
// Address: 0x1cfcd8 - 0x1cfed8
void sub_001CFCD8_0x1cfcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFCD8_0x1cfcd8");
#endif

    switch (ctx->pc) {
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe54u: goto label_1cfe54;
        case 0x1cfe58u: goto label_1cfe58;
        case 0x1cfe5cu: goto label_1cfe5c;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe64u: goto label_1cfe64;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe6cu: goto label_1cfe6c;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe74u: goto label_1cfe74;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe80u: goto label_1cfe80;
        case 0x1cfe84u: goto label_1cfe84;
        case 0x1cfe88u: goto label_1cfe88;
        case 0x1cfe8cu: goto label_1cfe8c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cfe98u: goto label_1cfe98;
        case 0x1cfe9cu: goto label_1cfe9c;
        case 0x1cfea0u: goto label_1cfea0;
        case 0x1cfea4u: goto label_1cfea4;
        case 0x1cfea8u: goto label_1cfea8;
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cfeb0u: goto label_1cfeb0;
        case 0x1cfeb4u: goto label_1cfeb4;
        case 0x1cfeb8u: goto label_1cfeb8;
        case 0x1cfebcu: goto label_1cfebc;
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        default: break;
    }

    ctx->pc = 0x1cfcd8u;

label_1cfcd8:
    // 0x1cfcd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cfcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cfcdc:
    // 0x1cfcdc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cfce0:
    // 0x1cfce0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cfce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cfce4:
    // 0x1cfce4: 0x8c509168  lw          $s0, -0x6E98($v0)
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1cfce8:
    // 0x1cfce8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cfce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cfcec:
    // 0x1cfcec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cfcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1cfcf0:
    // 0x1cfcf0: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
label_1cfcf4:
    if (ctx->pc == 0x1CFCF4u) {
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCF8u;
        goto label_1cfcf8;
    }
    ctx->pc = 0x1CFCF0u;
    {
        const bool branch_taken_0x1cfcf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcf0) {
            ctx->pc = 0x1CFEBCu;
            goto label_1cfebc;
        }
    }
    ctx->pc = 0x1CFCF8u;
label_1cfcf8:
    // 0x1cfcf8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cfcfc:
    // 0x1cfcfc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfd00:
    // 0x1cfd00: 0x8c439a08  lw          $v1, -0x65F8($v0)
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941192)));
label_1cfd04:
    // 0x1cfd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd08:
    // 0x1cfd08: 0x24a50938  addiu       $a1, $a1, 0x938
    ctx->pc = 0x1cfd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2360));
label_1cfd0c:
    // 0x1cfd0c: 0xc06c994  jal         func_1B2650
label_1cfd10:
    if (ctx->pc == 0x1CFD10u) {
        ctx->pc = 0x1CFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD0Cu;
        // 0x1cfd10: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD14u;
        goto label_1cfd14;
    }
    ctx->pc = 0x1CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD14u);
    ctx->pc = 0x1CFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD0Cu;
    // 0x1cfd10: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFD0Cu, 0x1CFD14u)) {
        return;
    }
    ctx->pc = 0x1CFD14u;
label_1cfd14:
    // 0x1cfd14: 0x3a320001  xori        $s2, $s1, 0x1
    ctx->pc = 0x1cfd14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_1cfd18:
    // 0x1cfd18: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfd1c:
    // 0x1cfd1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd20:
    // 0x1cfd20: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfd20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfd24:
    // 0x1cfd24: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfd28:
    // 0x1cfd28: 0xc0f809  jalr        $a2
label_1cfd2c:
    if (ctx->pc == 0x1CFD2Cu) {
        ctx->pc = 0x1CFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD28u;
        // 0x1cfd2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD30u;
        goto label_1cfd30;
    }
    ctx->pc = 0x1CFD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFD30u);
        ctx->pc = 0x1CFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD28u;
        // 0x1cfd2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD28u, 0x1CFD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFD30u;
label_1cfd30:
    // 0x1cfd30: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1cfd34:
    if (ctx->pc == 0x1CFD34u) {
        ctx->pc = 0x1CFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD30u;
        // 0x1cfd34: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD38u;
        goto label_1cfd38;
    }
    ctx->pc = 0x1CFD30u;
    {
        const bool branch_taken_0x1cfd30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD30u;
        // 0x1cfd34: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd30) {
            ctx->pc = 0x1CFD6Cu;
            goto label_1cfd6c;
        }
    }
    ctx->pc = 0x1CFD38u;
label_1cfd38:
    // 0x1cfd38: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
label_1cfd3c:
    // 0x1cfd3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cfd40:
    if (ctx->pc == 0x1CFD40u) {
        ctx->pc = 0x1CFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD3Cu;
        // 0x1cfd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD44u;
        goto label_1cfd44;
    }
    ctx->pc = 0x1CFD3Cu;
    {
        const bool branch_taken_0x1cfd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD3Cu;
        // 0x1cfd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd3c) {
            ctx->pc = 0x1CFD70u;
            goto label_1cfd70;
        }
    }
    ctx->pc = 0x1CFD44u;
label_1cfd44:
    // 0x1cfd44: 0xc06c994  jal         func_1B2650
label_1cfd48:
    if (ctx->pc == 0x1CFD48u) {
        ctx->pc = 0x1CFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD44u;
        // 0x1cfd48: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD4Cu;
        goto label_1cfd4c;
    }
    ctx->pc = 0x1CFD44u;
    SET_GPR_U32(ctx, 31, 0x1CFD4Cu);
    ctx->pc = 0x1CFD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD44u;
    // 0x1cfd48: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFD44u, 0x1CFD4Cu)) {
        return;
    }
    ctx->pc = 0x1CFD4Cu;
label_1cfd4c:
    // 0x1cfd4c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfd50:
    // 0x1cfd50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd54:
    // 0x1cfd54: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfd58:
    // 0x1cfd58: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfd5c:
    // 0x1cfd5c: 0xc0f809  jalr        $a2
label_1cfd60:
    if (ctx->pc == 0x1CFD60u) {
        ctx->pc = 0x1CFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD5Cu;
        // 0x1cfd60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD64u;
        goto label_1cfd64;
    }
    ctx->pc = 0x1CFD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFD64u);
        ctx->pc = 0x1CFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD5Cu;
        // 0x1cfd60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD5Cu, 0x1CFD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFD64u;
label_1cfd64:
    // 0x1cfd64: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cfd68:
    if (ctx->pc == 0x1CFD68u) {
        ctx->pc = 0x1CFD6Cu;
        goto label_1cfd6c;
    }
    ctx->pc = 0x1CFD64u;
    {
        const bool branch_taken_0x1cfd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd64) {
            ctx->pc = 0x1CFD90u;
            goto label_1cfd90;
        }
    }
    ctx->pc = 0x1CFD6Cu;
label_1cfd6c:
    // 0x1cfd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd70:
    // 0x1cfd70: 0xc06c994  jal         func_1B2650
label_1cfd74:
    if (ctx->pc == 0x1CFD74u) {
        ctx->pc = 0x1CFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD70u;
        // 0x1cfd74: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD78u;
        goto label_1cfd78;
    }
    ctx->pc = 0x1CFD70u;
    SET_GPR_U32(ctx, 31, 0x1CFD78u);
    ctx->pc = 0x1CFD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD70u;
    // 0x1cfd74: 0x24a50918  addiu       $a1, $a1, 0x918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFD70u, 0x1CFD78u)) {
        return;
    }
    ctx->pc = 0x1CFD78u;
label_1cfd78:
    // 0x1cfd78: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfd7c:
    // 0x1cfd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd80:
    // 0x1cfd80: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfd84:
    // 0x1cfd84: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfd88:
    // 0x1cfd88: 0xc0f809  jalr        $a2
label_1cfd8c:
    if (ctx->pc == 0x1CFD8Cu) {
        ctx->pc = 0x1CFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD88u;
        // 0x1cfd8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD90u;
        goto label_1cfd90;
    }
    ctx->pc = 0x1CFD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFD90u);
        ctx->pc = 0x1CFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD88u;
        // 0x1cfd8c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD88u, 0x1CFD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFD90u;
label_1cfd90:
    // 0x1cfd90: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1cfd94:
    if (ctx->pc == 0x1CFD94u) {
        ctx->pc = 0x1CFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD90u;
        // 0x1cfd94: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD98u;
        goto label_1cfd98;
    }
    ctx->pc = 0x1CFD90u;
    {
        const bool branch_taken_0x1cfd90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD90u;
        // 0x1cfd94: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd90) {
            ctx->pc = 0x1CFDD0u;
            goto label_1cfdd0;
        }
    }
    ctx->pc = 0x1CFD98u;
label_1cfd98:
    // 0x1cfd98: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x1cfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
label_1cfd9c:
    // 0x1cfd9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cfda0:
    if (ctx->pc == 0x1CFDA0u) {
        ctx->pc = 0x1CFDA4u;
        goto label_1cfda4;
    }
    ctx->pc = 0x1CFD9Cu;
    {
        const bool branch_taken_0x1cfd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd9c) {
            ctx->pc = 0x1CFDD0u;
            goto label_1cfdd0;
        }
    }
    ctx->pc = 0x1CFDA4u;
label_1cfda4:
    // 0x1cfda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfda8:
    // 0x1cfda8: 0xc06c994  jal         func_1B2650
label_1cfdac:
    if (ctx->pc == 0x1CFDACu) {
        ctx->pc = 0x1CFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDA8u;
        // 0x1cfdac: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDB0u;
        goto label_1cfdb0;
    }
    ctx->pc = 0x1CFDA8u;
    SET_GPR_U32(ctx, 31, 0x1CFDB0u);
    ctx->pc = 0x1CFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDA8u;
    // 0x1cfdac: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFDA8u, 0x1CFDB0u)) {
        return;
    }
    ctx->pc = 0x1CFDB0u;
label_1cfdb0:
    // 0x1cfdb0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfdb4:
    // 0x1cfdb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdb8:
    // 0x1cfdb8: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfdbc:
    // 0x1cfdbc: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfdc0:
    // 0x1cfdc0: 0xc0f809  jalr        $a2
label_1cfdc4:
    if (ctx->pc == 0x1CFDC4u) {
        ctx->pc = 0x1CFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC0u;
        // 0x1cfdc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDC8u;
        goto label_1cfdc8;
    }
    ctx->pc = 0x1CFDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFDC8u);
        ctx->pc = 0x1CFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC0u;
        // 0x1cfdc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDC0u, 0x1CFDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFDC8u;
label_1cfdc8:
    // 0x1cfdc8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cfdcc:
    if (ctx->pc == 0x1CFDCCu) {
        ctx->pc = 0x1CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC8u;
        // 0x1cfdcc: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDD0u;
        goto label_1cfdd0;
    }
    ctx->pc = 0x1CFDC8u;
    {
        const bool branch_taken_0x1cfdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC8u;
        // 0x1cfdcc: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdc8) {
            ctx->pc = 0x1CFDF8u;
            goto label_1cfdf8;
        }
    }
    ctx->pc = 0x1CFDD0u;
label_1cfdd0:
    // 0x1cfdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdd4:
    // 0x1cfdd4: 0xc06c994  jal         func_1B2650
label_1cfdd8:
    if (ctx->pc == 0x1CFDD8u) {
        ctx->pc = 0x1CFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD4u;
        // 0x1cfdd8: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDDCu;
        goto label_1cfddc;
    }
    ctx->pc = 0x1CFDD4u;
    SET_GPR_U32(ctx, 31, 0x1CFDDCu);
    ctx->pc = 0x1CFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDD4u;
    // 0x1cfdd8: 0x24a50928  addiu       $a1, $a1, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFDD4u, 0x1CFDDCu)) {
        return;
    }
    ctx->pc = 0x1CFDDCu;
label_1cfddc:
    // 0x1cfddc: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfde0:
    // 0x1cfde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfde4:
    // 0x1cfde4: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfde8:
    // 0x1cfde8: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfdec:
    // 0x1cfdec: 0xc0f809  jalr        $a2
label_1cfdf0:
    if (ctx->pc == 0x1CFDF0u) {
        ctx->pc = 0x1CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDECu;
        // 0x1cfdf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDF4u;
        goto label_1cfdf4;
    }
    ctx->pc = 0x1CFDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFDF4u);
        ctx->pc = 0x1CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDECu;
        // 0x1cfdf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDECu, 0x1CFDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFDF4u;
label_1cfdf4:
    // 0x1cfdf4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfdf8:
    // 0x1cfdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdfc:
    // 0x1cfdfc: 0xc06c994  jal         func_1B2650
label_1cfe00:
    if (ctx->pc == 0x1CFE00u) {
        ctx->pc = 0x1CFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDFCu;
        // 0x1cfe00: 0x24a50948  addiu       $a1, $a1, 0x948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE04u;
        goto label_1cfe04;
    }
    ctx->pc = 0x1CFDFCu;
    SET_GPR_U32(ctx, 31, 0x1CFE04u);
    ctx->pc = 0x1CFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDFCu;
    // 0x1cfe00: 0x24a50948  addiu       $a1, $a1, 0x948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFDFCu, 0x1CFE04u)) {
        return;
    }
    ctx->pc = 0x1CFE04u;
label_1cfe04:
    // 0x1cfe04: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfe08:
    // 0x1cfe08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe0c:
    // 0x1cfe0c: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfe0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfe10:
    // 0x1cfe10: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfe10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfe14:
    // 0x1cfe14: 0xc0f809  jalr        $a2
label_1cfe18:
    if (ctx->pc == 0x1CFE18u) {
        ctx->pc = 0x1CFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE14u;
        // 0x1cfe18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE1Cu;
        goto label_1cfe1c;
    }
    ctx->pc = 0x1CFE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFE1Cu);
        ctx->pc = 0x1CFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE14u;
        // 0x1cfe18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE14u, 0x1CFE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFE1Cu;
label_1cfe1c:
    // 0x1cfe1c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfe20:
    // 0x1cfe20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe24:
    // 0x1cfe24: 0xc06c994  jal         func_1B2650
label_1cfe28:
    if (ctx->pc == 0x1CFE28u) {
        ctx->pc = 0x1CFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE24u;
        // 0x1cfe28: 0x24a50958  addiu       $a1, $a1, 0x958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE2Cu;
        goto label_1cfe2c;
    }
    ctx->pc = 0x1CFE24u;
    SET_GPR_U32(ctx, 31, 0x1CFE2Cu);
    ctx->pc = 0x1CFE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE24u;
    // 0x1cfe28: 0x24a50958  addiu       $a1, $a1, 0x958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFE24u, 0x1CFE2Cu)) {
        return;
    }
    ctx->pc = 0x1CFE2Cu;
label_1cfe2c:
    // 0x1cfe2c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfe30:
    // 0x1cfe30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe34:
    // 0x1cfe34: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfe38:
    // 0x1cfe38: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfe3c:
    // 0x1cfe3c: 0xc0f809  jalr        $a2
label_1cfe40:
    if (ctx->pc == 0x1CFE40u) {
        ctx->pc = 0x1CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE3Cu;
        // 0x1cfe40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE44u;
        goto label_1cfe44;
    }
    ctx->pc = 0x1CFE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFE44u);
        ctx->pc = 0x1CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE3Cu;
        // 0x1cfe40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE3Cu, 0x1CFE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFE44u;
label_1cfe44:
    // 0x1cfe44: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfe48:
    // 0x1cfe48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe4c:
    // 0x1cfe4c: 0xc06c994  jal         func_1B2650
label_1cfe50:
    if (ctx->pc == 0x1CFE50u) {
        ctx->pc = 0x1CFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE4Cu;
        // 0x1cfe50: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE54u;
        goto label_1cfe54;
    }
    ctx->pc = 0x1CFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE54u);
    ctx->pc = 0x1CFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE4Cu;
    // 0x1cfe50: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFE4Cu, 0x1CFE54u)) {
        return;
    }
    ctx->pc = 0x1CFE54u;
label_1cfe54:
    // 0x1cfe54: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfe58:
    // 0x1cfe58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cfe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe5c:
    // 0x1cfe5c: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfe5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfe60:
    // 0x1cfe60: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfe64:
    // 0x1cfe64: 0xc0f809  jalr        $a2
label_1cfe68:
    if (ctx->pc == 0x1CFE68u) {
        ctx->pc = 0x1CFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE64u;
        // 0x1cfe68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE6Cu;
        goto label_1cfe6c;
    }
    ctx->pc = 0x1CFE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFE6Cu);
        ctx->pc = 0x1CFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE64u;
        // 0x1cfe68: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE64u, 0x1CFE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFE6Cu;
label_1cfe6c:
    // 0x1cfe6c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfe70:
    // 0x1cfe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe74:
    // 0x1cfe74: 0xc06c994  jal         func_1B2650
label_1cfe78:
    if (ctx->pc == 0x1CFE78u) {
        ctx->pc = 0x1CFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE74u;
        // 0x1cfe78: 0x24a50980  addiu       $a1, $a1, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE7Cu;
        goto label_1cfe7c;
    }
    ctx->pc = 0x1CFE74u;
    SET_GPR_U32(ctx, 31, 0x1CFE7Cu);
    ctx->pc = 0x1CFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE74u;
    // 0x1cfe78: 0x24a50980  addiu       $a1, $a1, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFE74u, 0x1CFE7Cu)) {
        return;
    }
    ctx->pc = 0x1CFE7Cu;
label_1cfe7c:
    // 0x1cfe7c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfe80:
    // 0x1cfe80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe84:
    // 0x1cfe84: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfe84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfe88:
    // 0x1cfe88: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfe88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfe8c:
    // 0x1cfe8c: 0xc0f809  jalr        $a2
label_1cfe90:
    if (ctx->pc == 0x1CFE90u) {
        ctx->pc = 0x1CFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE8Cu;
        // 0x1cfe90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE94u;
        goto label_1cfe94;
    }
    ctx->pc = 0x1CFE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFE94u);
        ctx->pc = 0x1CFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE8Cu;
        // 0x1cfe90: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE8Cu, 0x1CFE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFE94u;
label_1cfe94:
    // 0x1cfe94: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1cfe98:
    // 0x1cfe98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe9c:
    // 0x1cfe9c: 0xc06c994  jal         func_1B2650
label_1cfea0:
    if (ctx->pc == 0x1CFEA0u) {
        ctx->pc = 0x1CFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE9Cu;
        // 0x1cfea0: 0x24a50990  addiu       $a1, $a1, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFEA4u;
        goto label_1cfea4;
    }
    ctx->pc = 0x1CFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFEA4u);
    ctx->pc = 0x1CFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE9Cu;
    // 0x1cfea0: 0x24a50990  addiu       $a1, $a1, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CFE9Cu, 0x1CFEA4u)) {
        return;
    }
    ctx->pc = 0x1CFEA4u;
label_1cfea4:
    // 0x1cfea4: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1cfea8:
    // 0x1cfea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cfea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfeac:
    // 0x1cfeac: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1cfeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1cfeb0:
    // 0x1cfeb0: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1cfeb4:
    // 0x1cfeb4: 0xc0f809  jalr        $a2
label_1cfeb8:
    if (ctx->pc == 0x1CFEB8u) {
        ctx->pc = 0x1CFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB4u;
        // 0x1cfeb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFEBCu;
        goto label_1cfebc;
    }
    ctx->pc = 0x1CFEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CFEBCu);
        ctx->pc = 0x1CFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB4u;
        // 0x1cfeb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFEB4u, 0x1CFEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFEBCu;
label_1cfebc:
    // 0x1cfebc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cfebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cfec0:
    // 0x1cfec0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cfec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cfec4:
    // 0x1cfec4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cfec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cfec8:
    // 0x1cfec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfecc:
    // 0x1cfecc: 0x3e00008  jr          $ra
label_1cfed0:
    if (ctx->pc == 0x1CFED0u) {
        ctx->pc = 0x1CFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFECCu;
        // 0x1cfed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFED4u;
        goto label_1cfed4;
    }
    ctx->pc = 0x1CFECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFECCu;
        // 0x1cfed0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFED4u;
label_1cfed4:
    // 0x1cfed4: 0x0  nop
    ctx->pc = 0x1cfed4u;
    // NOP
    ctx->pc = 0x1cfed8u;
}
