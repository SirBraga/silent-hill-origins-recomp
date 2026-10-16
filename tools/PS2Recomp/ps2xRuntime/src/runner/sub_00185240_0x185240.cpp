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

// Function: sub_00185240
// Address: 0x185240 - 0x185580
void sub_00185240_0x185240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185240_0x185240");
#endif

    switch (ctx->pc) {
        case 0x1852c4u: goto label_1852c4;
        case 0x185308u: goto label_185308;
        case 0x18534cu: goto label_18534c;
        case 0x185380u: goto label_185380;
        case 0x1853b8u: goto label_1853b8;
        case 0x1853f0u: goto label_1853f0;
        case 0x185420u: goto label_185420;
        case 0x185434u: goto label_185434;
        case 0x185444u: goto label_185444;
        case 0x185458u: goto label_185458;
        case 0x185468u: goto label_185468;
        case 0x1854a0u: goto label_1854a0;
        case 0x1854c4u: goto label_1854c4;
        case 0x1854f4u: goto label_1854f4;
        case 0x185534u: goto label_185534;
        default: break;
    }

    ctx->pc = 0x185240u;

    // 0x185240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x185240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x185244: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x185244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x185248: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x185248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18524c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x185250: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x185250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185254: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x185254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x185258: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x185258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18525c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x185260: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x185260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x185264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185268: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x18526c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x185270: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185270u;
    {
        const bool branch_taken_0x185270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x185274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185270u;
        // 0x185274: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185270) {
            ctx->pc = 0x185288u;
            goto label_185288;
        }
    }
    ctx->pc = 0x185278u;
    // 0x185278: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x185278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x18527c: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x18527cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x185280: 0x14a300b4  bne         $a1, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x185280u;
    {
        const bool branch_taken_0x185280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x185284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185280u;
        // 0x185284: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185280) {
            ctx->pc = 0x185554u;
            goto label_185554;
        }
    }
    ctx->pc = 0x185288u;
label_185288:
    // 0x185288: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x18528c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x18528Cu;
    {
        const bool branch_taken_0x18528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18528Cu;
        // 0x185290: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18528c) {
            ctx->pc = 0x185548u;
            goto label_185548;
        }
    }
    ctx->pc = 0x185294u;
    // 0x185294: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x185294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x185298: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x185298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x18529c: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18529Cu;
    {
        const bool branch_taken_0x18529c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18529Cu;
        // 0x1852a0: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18529c) {
            ctx->pc = 0x185314u;
            goto label_185314;
        }
    }
    ctx->pc = 0x1852A4u;
    // 0x1852a4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1852a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1852a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1852a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1852ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1852ACu;
    {
        const bool branch_taken_0x1852ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852ACu;
        // 0x1852b0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852ac) {
            ctx->pc = 0x185314u;
            goto label_185314;
        }
    }
    ctx->pc = 0x1852B4u;
    // 0x1852b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1852b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1852b8: 0x24513c40  addiu       $s1, $v0, 0x3C40
    ctx->pc = 0x1852b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15424));
    // 0x1852bc: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x1852BCu;
    SET_GPR_U32(ctx, 31, 0x1852C4u);
    ctx->pc = 0x1852C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852BCu;
    // 0x1852c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x1852BCu, 0x1852C4u)) {
        return;
    }
    ctx->pc = 0x1852C4u;
label_1852c4:
    // 0x1852c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1852c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852c8: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x1852c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1852cc: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1852ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1852d0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1852d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1852d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1852d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1852d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1852D8u;
    {
        const bool branch_taken_0x1852d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1852DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852D8u;
        // 0x1852dc: 0xae63003c  sw          $v1, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852d8) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x1852E0u;
    // 0x1852e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1852e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1852e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1852e8: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x1852e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x1852ec: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1852ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1852f0:
    // 0x1852f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1852f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1852f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1852f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852f8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1852f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1852fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1852fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185300: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x185300u;
    SET_GPR_U32(ctx, 31, 0x185308u);
    ctx->pc = 0x185304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185300u;
    // 0x185304: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185300u, 0x185308u)) {
        return;
    }
    ctx->pc = 0x185308u;
label_185308:
    // 0x185308: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18530c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x185310: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x185310u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_185314:
    // 0x185314: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x185314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x185318: 0x18a0008e  blez        $a1, . + 4 + (0x8E << 2)
    ctx->pc = 0x185318u;
    {
        const bool branch_taken_0x185318 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x18531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185318u;
        // 0x18531c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185318) {
            ctx->pc = 0x185554u;
            goto label_185554;
        }
    }
    ctx->pc = 0x185320u;
    // 0x185320: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x185324: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x185324u;
    {
        const bool branch_taken_0x185324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185324) {
            ctx->pc = 0x185328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185324u;
            // 0x185328: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185364u;
            goto label_185364;
        }
    }
    ctx->pc = 0x18532Cu;
    // 0x18532c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x18532cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x185330: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x185330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x185334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185334u;
    {
        const bool branch_taken_0x185334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185334u;
        // 0x185338: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185334) {
            ctx->pc = 0x185360u;
            goto label_185360;
        }
    }
    ctx->pc = 0x18533Cu;
    // 0x18533c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x18533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x185340: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x185340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x185344: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x185344u;
    SET_GPR_U32(ctx, 31, 0x18534Cu);
    ctx->pc = 0x185348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185344u;
    // 0x185348: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185344u, 0x18534Cu)) {
        return;
    }
    ctx->pc = 0x18534Cu;
label_18534c:
    // 0x18534c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x185350: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x185354: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x185354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x185358: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x185358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18535c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x18535cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_185360:
    // 0x185360: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_185364:
    // 0x185364: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x185364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185368: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x185368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18536c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18536Cu;
    {
        const bool branch_taken_0x18536c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18536Cu;
        // 0x185370: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18536c) {
            ctx->pc = 0x1853B8u;
            goto label_1853b8;
        }
    }
    ctx->pc = 0x185374u;
    // 0x185374: 0x3407ff01  ori         $a3, $zero, 0xFF01
    ctx->pc = 0x185374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
    // 0x185378: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x185378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18537c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x18537cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_185380:
    // 0x185380: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x185380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x185384: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x185384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x185388: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x185388u;
    {
        const bool branch_taken_0x185388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185388) {
            ctx->pc = 0x18538Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185388u;
            // 0x18538c: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1853BCu;
            goto label_1853bc;
        }
    }
    ctx->pc = 0x185390u;
    // 0x185390: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x185390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185394: 0x50670018  beql        $v1, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x185394u;
    {
        const bool branch_taken_0x185394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x185394) {
            ctx->pc = 0x185398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185394u;
            // 0x185398: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1853F8u;
            goto label_1853f8;
        }
    }
    ctx->pc = 0x18539Cu;
    // 0x18539c: 0x54660007  bnel        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18539Cu;
    {
        const bool branch_taken_0x18539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x18539c) {
            ctx->pc = 0x1853A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18539Cu;
            // 0x1853a0: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1853BCu;
            goto label_1853bc;
        }
    }
    ctx->pc = 0x1853A4u;
    // 0x1853a4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1853a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1853a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1853ac: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1853acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1853b0: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1853B0u;
    {
        const bool branch_taken_0x1853b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853b0) {
            ctx->pc = 0x1853B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1853B0u;
            // 0x1853b4: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185380;
        }
    }
    ctx->pc = 0x1853B8u;
label_1853b8:
    // 0x1853b8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_1853bc:
    // 0x1853bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1853BCu;
    {
        const bool branch_taken_0x1853bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853BCu;
        // 0x1853c0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853bc) {
            ctx->pc = 0x185420u;
            goto label_185420;
        }
    }
    ctx->pc = 0x1853C4u;
    // 0x1853c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1853c8: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x1853c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x1853cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1853CCu;
    {
        const bool branch_taken_0x1853cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1853D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853CCu;
        // 0x1853d0: 0x8e620064  lw          $v0, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853cc) {
            ctx->pc = 0x185408u;
            goto label_185408;
        }
    }
    ctx->pc = 0x1853D4u;
    // 0x1853d4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1853D4u;
    {
        const bool branch_taken_0x1853d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853d4) {
            ctx->pc = 0x1853D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1853D4u;
            // 0x1853d8: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185424u;
            goto label_185424;
        }
    }
    ctx->pc = 0x1853DCu;
    // 0x1853dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1853dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1853e0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1853e4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x1853e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x1853e8: 0xc0604f2  jal         func_1813C8
    ctx->pc = 0x1853E8u;
    SET_GPR_U32(ctx, 31, 0x1853F0u);
    ctx->pc = 0x1853ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853E8u;
    // 0x1853ec: 0x2484bc40  addiu       $a0, $a0, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1813C8u, 0x1853E8u, 0x1853F0u)) {
        return;
    }
    ctx->pc = 0x1853F0u;
label_1853f0:
    // 0x1853f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1853F0u;
    {
        const bool branch_taken_0x1853f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853F0u;
        // 0x1853f4: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853f0) {
            ctx->pc = 0x185424u;
            goto label_185424;
        }
    }
    ctx->pc = 0x1853F8u;
label_1853f8:
    // 0x1853f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1853f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1853fc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1853fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x185400: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x185400u;
    {
        const bool branch_taken_0x185400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185400u;
        // 0x185404: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185400) {
            ctx->pc = 0x1853B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1853b8;
        }
    }
    ctx->pc = 0x185408u;
label_185408:
    // 0x185408: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x185408u;
    {
        const bool branch_taken_0x185408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185408) {
            ctx->pc = 0x18540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185408u;
            // 0x18540c: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185424u;
            goto label_185424;
        }
    }
    ctx->pc = 0x185410u;
    // 0x185410: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x185414: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x185414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x185418: 0xc060514  jal         func_181450
    ctx->pc = 0x185418u;
    SET_GPR_U32(ctx, 31, 0x185420u);
    ctx->pc = 0x18541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185418u;
    // 0x18541c: 0x2484bc40  addiu       $a0, $a0, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181450u, 0x185418u, 0x185420u)) {
        return;
    }
    ctx->pc = 0x185420u;
label_185420:
    // 0x185420: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_185424:
    // 0x185424: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x185424u;
    {
        const bool branch_taken_0x185424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185424) {
            ctx->pc = 0x185428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185424u;
            // 0x185428: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185474u;
            goto label_185474;
        }
    }
    ctx->pc = 0x18542Cu;
    // 0x18542c: 0xc061424  jal         func_185090
    ctx->pc = 0x18542Cu;
    SET_GPR_U32(ctx, 31, 0x185434u);
    ctx->pc = 0x185430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18542Cu;
    // 0x185430: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185090u, 0x18542Cu, 0x185434u)) {
        return;
    }
    ctx->pc = 0x185434u;
label_185434:
    // 0x185434: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x185434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x185438: 0x2450bc40  addiu       $s0, $v0, -0x43C0
    ctx->pc = 0x185438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949952));
    // 0x18543c: 0xc06044c  jal         func_181130
    ctx->pc = 0x18543Cu;
    SET_GPR_U32(ctx, 31, 0x185444u);
    ctx->pc = 0x185440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18543Cu;
    // 0x185440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181130u, 0x18543Cu, 0x185444u)) {
        return;
    }
    ctx->pc = 0x185444u;
label_185444:
    // 0x185444: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x185448: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x185448u;
    {
        const bool branch_taken_0x185448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185448) {
            ctx->pc = 0x18544Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185448u;
            // 0x18544c: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185474u;
            goto label_185474;
        }
    }
    ctx->pc = 0x185450u;
    // 0x185450: 0xc0605d2  jal         func_181748
    ctx->pc = 0x185450u;
    SET_GPR_U32(ctx, 31, 0x185458u);
    ctx->pc = 0x185454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185450u;
    // 0x185454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181748u, 0x185450u, 0x185458u)) {
        return;
    }
    ctx->pc = 0x185458u;
label_185458:
    // 0x185458: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x185458u;
    {
        const bool branch_taken_0x185458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185458) {
            ctx->pc = 0x18545Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185458u;
            // 0x18545c: 0x8e620038  lw          $v0, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185474u;
            goto label_185474;
        }
    }
    ctx->pc = 0x185460u;
    // 0x185460: 0xc060530  jal         func_1814C0
    ctx->pc = 0x185460u;
    SET_GPR_U32(ctx, 31, 0x185468u);
    ctx->pc = 0x185464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185460u;
    // 0x185464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1814C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1814C0u, 0x185460u, 0x185468u)) {
        return;
    }
    ctx->pc = 0x185468u;
label_185468:
    // 0x185468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18546c: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x18546cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x185470: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_185474:
    // 0x185474: 0x28422001  slti        $v0, $v0, 0x2001
    ctx->pc = 0x185474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x185478: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x185478u;
    {
        const bool branch_taken_0x185478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185478) {
            ctx->pc = 0x18547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185478u;
            // 0x18547c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185554u;
            goto label_185554;
        }
    }
    ctx->pc = 0x185480u;
    // 0x185480: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x185480u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x185484: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x185488: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x185488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x18548c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x18548cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x185490: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x185490u;
    {
        const bool branch_taken_0x185490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185490u;
        // 0x185494: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185490) {
            ctx->pc = 0x185518u;
            goto label_185518;
        }
    }
    ctx->pc = 0x185498u;
    // 0x185498: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x185498u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18549c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x18549cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1854a0:
    // 0x1854a0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1854a4: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1854a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1854a8: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1854A8u;
    {
        const bool branch_taken_0x1854a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854a8) {
            ctx->pc = 0x1854ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1854A8u;
            // 0x1854ac: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1854D8u;
            goto label_1854d8;
        }
    }
    ctx->pc = 0x1854B0u;
    // 0x1854b0: 0x12340004  beq         $s1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1854B0u;
    {
        const bool branch_taken_0x1854b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1854B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854B0u;
        // 0x1854b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854b0) {
            ctx->pc = 0x1854C4u;
            goto label_1854c4;
        }
    }
    ctx->pc = 0x1854B8u;
    // 0x1854b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1854b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854bc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1854BCu;
    SET_GPR_U32(ctx, 31, 0x1854C4u);
    ctx->pc = 0x1854C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854BCu;
    // 0x1854c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1854BCu, 0x1854C4u)) {
        return;
    }
    ctx->pc = 0x1854C4u;
label_1854c4:
    // 0x1854c4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1854c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1854c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1854c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1854cc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1854ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1854d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1854D0u;
    {
        const bool branch_taken_0x1854d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1854D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854D0u;
        // 0x1854d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854d0) {
            ctx->pc = 0x18550Cu;
            goto label_18550c;
        }
    }
    ctx->pc = 0x1854D8u;
label_1854d8:
    // 0x1854d8: 0x5055000b  beql        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1854D8u;
    {
        const bool branch_taken_0x1854d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1854d8) {
            ctx->pc = 0x1854DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1854D8u;
            // 0x1854dc: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185508u;
            goto label_185508;
        }
    }
    ctx->pc = 0x1854E0u;
    // 0x1854e0: 0x12340004  beq         $s1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1854E0u;
    {
        const bool branch_taken_0x1854e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1854E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854E0u;
        // 0x1854e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854e0) {
            ctx->pc = 0x1854F4u;
            goto label_1854f4;
        }
    }
    ctx->pc = 0x1854E8u;
    // 0x1854e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1854e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854ec: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1854ECu;
    SET_GPR_U32(ctx, 31, 0x1854F4u);
    ctx->pc = 0x1854F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854ECu;
    // 0x1854f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1854ECu, 0x1854F4u)) {
        return;
    }
    ctx->pc = 0x1854F4u;
label_1854f4:
    // 0x1854f4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1854f8: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1854fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x185500: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x185500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x185504: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x185504u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_185508:
    // 0x185508: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_18550c:
    // 0x18550c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x18550cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x185510: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x185510u;
    {
        const bool branch_taken_0x185510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185510) {
            ctx->pc = 0x185514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185510u;
            // 0x185514: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1854A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1854a0;
        }
    }
    ctx->pc = 0x185518u;
label_185518:
    // 0x185518: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x185518u;
    {
        const bool branch_taken_0x185518 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x185518) {
            ctx->pc = 0x18551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185518u;
            // 0x18551c: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185550u;
            goto label_185550;
        }
    }
    ctx->pc = 0x185520u;
    // 0x185520: 0x12340004  beq         $s1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x185520u;
    {
        const bool branch_taken_0x185520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x185524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185520u;
        // 0x185524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185520) {
            ctx->pc = 0x185534u;
            goto label_185534;
        }
    }
    ctx->pc = 0x185528u;
    // 0x185528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18552c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x18552Cu;
    SET_GPR_U32(ctx, 31, 0x185534u);
    ctx->pc = 0x185530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18552Cu;
    // 0x185530: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x18552Cu, 0x185534u)) {
        return;
    }
    ctx->pc = 0x185534u;
label_185534:
    // 0x185534: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x185538: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18553c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x18553cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x185540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185540u;
    {
        const bool branch_taken_0x185540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185540u;
        // 0x185544: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185540) {
            ctx->pc = 0x185550u;
            goto label_185550;
        }
    }
    ctx->pc = 0x185548u;
label_185548:
    // 0x185548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18554c: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x18554cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_185550:
    // 0x185550: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x185550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_185554:
    // 0x185554: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x185554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185558: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x185558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18555c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18555cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185560: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x185560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185564: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x185564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18556c: 0x3e00008  jr          $ra
    ctx->pc = 0x18556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18556Cu;
        // 0x185570: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185574u;
    // 0x185574: 0x0  nop
    ctx->pc = 0x185574u;
    // NOP
    // 0x185578: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18557c: 0x0  nop
    ctx->pc = 0x18557cu;
    // NOP
    ctx->pc = 0x185580u;
}
