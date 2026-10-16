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

// Function: sub_00205950
// Address: 0x205950 - 0x205a10
void sub_00205950_0x205950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205950_0x205950");
#endif

    switch (ctx->pc) {
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        default: break;
    }

    ctx->pc = 0x205950u;

label_205950:
    // 0x205950: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_205954:
    // 0x205954: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x205954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_205958:
    // 0x205958: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x205958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_20595c:
    // 0x20595c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x20595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_205960:
    // 0x205960: 0xc0815b2  jal         func_2056C8
label_205964:
    if (ctx->pc == 0x205964u) {
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205968u;
        goto label_205968;
    }
    ctx->pc = 0x205960u;
    SET_GPR_U32(ctx, 31, 0x205968u);
    ctx->pc = 0x205964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205960u;
    // 0x205964: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205960u, 0x205968u)) {
        return;
    }
    ctx->pc = 0x205968u;
label_205968:
    // 0x205968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20596c:
    // 0x20596c: 0xc08161c  jal         func_205870
label_205970:
    if (ctx->pc == 0x205970u) {
        ctx->pc = 0x205970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20596Cu;
        // 0x205970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205974u;
        goto label_205974;
    }
    ctx->pc = 0x20596Cu;
    SET_GPR_U32(ctx, 31, 0x205974u);
    ctx->pc = 0x205970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20596Cu;
    // 0x205970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205870u, 0x20596Cu, 0x205974u)) {
        return;
    }
    ctx->pc = 0x205974u;
label_205974:
    // 0x205974: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_205978:
    if (ctx->pc == 0x205978u) {
        ctx->pc = 0x205978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205974u;
        // 0x205978: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20597Cu;
        goto label_20597c;
    }
    ctx->pc = 0x205974u;
    {
        const bool branch_taken_0x205974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205974u;
        // 0x205978: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205974) {
            ctx->pc = 0x2059FCu;
            goto label_2059fc;
        }
    }
    ctx->pc = 0x20597Cu;
label_20597c:
    // 0x20597c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205980:
    // 0x205980: 0xc0808f0  jal         func_2023C0
label_205984:
    if (ctx->pc == 0x205984u) {
        ctx->pc = 0x205984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205980u;
        // 0x205984: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205988u;
        goto label_205988;
    }
    ctx->pc = 0x205980u;
    SET_GPR_U32(ctx, 31, 0x205988u);
    ctx->pc = 0x205984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205980u;
    // 0x205984: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x205980u, 0x205988u)) {
        return;
    }
    ctx->pc = 0x205988u;
label_205988:
    // 0x205988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20598c:
    // 0x20598c: 0xc0815ca  jal         func_205728
label_205990:
    if (ctx->pc == 0x205990u) {
        ctx->pc = 0x205990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20598Cu;
        // 0x205990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205994u;
        goto label_205994;
    }
    ctx->pc = 0x20598Cu;
    SET_GPR_U32(ctx, 31, 0x205994u);
    ctx->pc = 0x205990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20598Cu;
    // 0x205990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205728u, 0x20598Cu, 0x205994u)) {
        return;
    }
    ctx->pc = 0x205994u;
label_205994:
    // 0x205994: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x205994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_205998:
    // 0x205998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20599c:
    // 0x20599c: 0x24633f18  addiu       $v1, $v1, 0x3F18
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16152));
label_2059a0:
    // 0x2059a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2059a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2059a4:
    // 0x2059a4: 0xc081766  jal         func_205D98
label_2059a8:
    if (ctx->pc == 0x2059A8u) {
        ctx->pc = 0x2059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059A4u;
        // 0x2059a8: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059ACu;
        goto label_2059ac;
    }
    ctx->pc = 0x2059A4u;
    SET_GPR_U32(ctx, 31, 0x2059ACu);
    ctx->pc = 0x2059A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059A4u;
    // 0x2059a8: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D98u, 0x2059A4u, 0x2059ACu)) {
        return;
    }
    ctx->pc = 0x2059ACu;
label_2059ac:
    // 0x2059ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2059acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2059b0:
    // 0x2059b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2059b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2059b4:
    // 0x2059b4: 0xc0936ae  jal         func_24DAB8
label_2059b8:
    if (ctx->pc == 0x2059B8u) {
        ctx->pc = 0x2059B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059B4u;
        // 0x2059b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059BCu;
        goto label_2059bc;
    }
    ctx->pc = 0x2059B4u;
    SET_GPR_U32(ctx, 31, 0x2059BCu);
    ctx->pc = 0x2059B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059B4u;
    // 0x2059b8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x2059B4u, 0x2059BCu)) {
        return;
    }
    ctx->pc = 0x2059BCu;
label_2059bc:
    // 0x2059bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2059bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2059c0:
    // 0x2059c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2059c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2059c4:
    // 0x2059c4: 0xc081384  jal         func_204E10
label_2059c8:
    if (ctx->pc == 0x2059C8u) {
        ctx->pc = 0x2059C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059C4u;
        // 0x2059c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059CCu;
        goto label_2059cc;
    }
    ctx->pc = 0x2059C4u;
    SET_GPR_U32(ctx, 31, 0x2059CCu);
    ctx->pc = 0x2059C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059C4u;
    // 0x2059c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204E10u, 0x2059C4u, 0x2059CCu)) {
        return;
    }
    ctx->pc = 0x2059CCu;
label_2059cc:
    // 0x2059cc: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_2059d0:
    if (ctx->pc == 0x2059D0u) {
        ctx->pc = 0x2059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059CCu;
        // 0x2059d0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059D4u;
        goto label_2059d4;
    }
    ctx->pc = 0x2059CCu;
    {
        const bool branch_taken_0x2059cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2059cc) {
            ctx->pc = 0x2059D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2059CCu;
            // 0x2059d0: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059FCu;
            goto label_2059fc;
        }
    }
    ctx->pc = 0x2059D4u;
label_2059d4:
    // 0x2059d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2059d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2059d8:
    // 0x2059d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2059dc:
    if (ctx->pc == 0x2059DCu) {
        ctx->pc = 0x2059DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059D8u;
        // 0x2059dc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059E0u;
        goto label_2059e0;
    }
    ctx->pc = 0x2059D8u;
    {
        const bool branch_taken_0x2059d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2059d8) {
            ctx->pc = 0x2059DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2059D8u;
            // 0x2059dc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059FCu;
            goto label_2059fc;
        }
    }
    ctx->pc = 0x2059E0u;
label_2059e0:
    // 0x2059e0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2059e4:
    // 0x2059e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2059e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2059e8:
    // 0x2059e8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2059ec:
    // 0x2059ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2059f0:
    // 0x2059f0: 0x60f809  jalr        $v1
label_2059f4:
    if (ctx->pc == 0x2059F4u) {
        ctx->pc = 0x2059F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F0u;
        // 0x2059f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059F8u;
        goto label_2059f8;
    }
    ctx->pc = 0x2059F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2059F8u);
        ctx->pc = 0x2059F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F0u;
        // 0x2059f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059F0u, 0x2059F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2059F8u;
label_2059f8:
    // 0x2059f8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2059f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2059fc:
    // 0x2059fc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2059fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_205a00:
    // 0x205a00: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x205a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_205a04:
    // 0x205a04: 0x3e00008  jr          $ra
label_205a08:
    if (ctx->pc == 0x205A08u) {
        ctx->pc = 0x205A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A04u;
        // 0x205a08: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A0Cu;
        goto label_205a0c;
    }
    ctx->pc = 0x205A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A04u;
        // 0x205a08: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A0Cu;
label_205a0c:
    // 0x205a0c: 0x0  nop
    ctx->pc = 0x205a0cu;
    // NOP
    ctx->pc = 0x205a10u;
}
