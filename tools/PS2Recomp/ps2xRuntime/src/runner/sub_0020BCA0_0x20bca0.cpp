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

// Function: sub_0020BCA0
// Address: 0x20bca0 - 0x20bfe0
void sub_0020BCA0_0x20bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BCA0_0x20bca0");
#endif

    switch (ctx->pc) {
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        default: break;
    }

    ctx->pc = 0x20bca0u;

label_20bca0:
    // 0x20bca0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20bca4:
    // 0x20bca4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x20bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_20bca8:
    // 0x20bca8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x20bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_20bcac:
    // 0x20bcac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20bcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20bcb0:
    // 0x20bcb0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x20bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_20bcb4:
    // 0x20bcb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20bcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bcb8:
    // 0x20bcb8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x20bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_20bcbc:
    // 0x20bcbc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x20bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_20bcc0:
    // 0x20bcc0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x20bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_20bcc4:
    // 0x20bcc4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20bcc8:
    // 0x20bcc8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x20bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_20bccc:
    // 0x20bccc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x20bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_20bcd0:
    // 0x20bcd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20bcd4:
    // 0x20bcd4: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x20bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_20bcd8:
    // 0x20bcd8: 0x8e3201bc  lw          $s2, 0x1BC($s1)
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_20bcdc:
    // 0x20bcdc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_20bce0:
    if (ctx->pc == 0x20BCE0u) {
        ctx->pc = 0x20BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCDCu;
        // 0x20bce0: 0x8e37019c  lw          $s7, 0x19C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BCE4u;
        goto label_20bce4;
    }
    ctx->pc = 0x20BCDCu;
    {
        const bool branch_taken_0x20bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCDCu;
        // 0x20bce0: 0x8e37019c  lw          $s7, 0x19C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcdc) {
            ctx->pc = 0x20BD8Cu;
            goto label_20bd8c;
        }
    }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_20bce8:
    // 0x20bce8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_20bcec:
    if (ctx->pc == 0x20BCECu) {
        ctx->pc = 0x20BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCE8u;
        // 0x20bcec: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BCF0u;
        goto label_20bcf0;
    }
    ctx->pc = 0x20BCE8u;
    {
        const bool branch_taken_0x20bce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bce8) {
            ctx->pc = 0x20BCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BCE8u;
            // 0x20bcec: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD90u;
            goto label_20bd90;
        }
    }
    ctx->pc = 0x20BCF0u;
label_20bcf0:
    // 0x20bcf0: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20bcf4:
    // 0x20bcf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20bcf8:
    // 0x20bcf8: 0x8e2701b8  lw          $a3, 0x1B8($s1)
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_20bcfc:
    // 0x20bcfc: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x20bcfcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20bd00:
    // 0x20bd00: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_20bd04:
    // 0x20bd04: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x20bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_20bd08:
    // 0x20bd08: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x20bd08u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_20bd0c:
    // 0x20bd0c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x20bd0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_20bd10:
    // 0x20bd10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20bd14:
    // 0x20bd14: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x20bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_20bd18:
    // 0x20bd18: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x20bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_20bd1c:
    // 0x20bd1c: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x20bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_20bd20:
    // 0x20bd20: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20bd24:
    // 0x20bd24: 0x40f809  jalr        $v0
label_20bd28:
    if (ctx->pc == 0x20BD28u) {
        ctx->pc = 0x20BD2Cu;
        goto label_20bd2c;
    }
    ctx->pc = 0x20BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BD2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD24u, 0x20BD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BD2Cu;
label_20bd2c:
    // 0x20bd2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20bd30:
    if (ctx->pc == 0x20BD30u) {
        ctx->pc = 0x20BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD2Cu;
        // 0x20bd30: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD34u;
        goto label_20bd34;
    }
    ctx->pc = 0x20BD2Cu;
    {
        const bool branch_taken_0x20bd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bd2c) {
            ctx->pc = 0x20BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD2Cu;
            // 0x20bd30: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD3Cu;
            goto label_20bd3c;
        }
    }
    ctx->pc = 0x20BD34u;
label_20bd34:
    // 0x20bd34: 0x10000011  b           . + 4 + (0x11 << 2)
label_20bd38:
    if (ctx->pc == 0x20BD38u) {
        ctx->pc = 0x20BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD34u;
        // 0x20bd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD3Cu;
        goto label_20bd3c;
    }
    ctx->pc = 0x20BD34u;
    {
        const bool branch_taken_0x20bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD34u;
        // 0x20bd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd34) {
            ctx->pc = 0x20BD7Cu;
            goto label_20bd7c;
        }
    }
    ctx->pc = 0x20BD3Cu;
label_20bd3c:
    // 0x20bd3c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_20bd40:
    if (ctx->pc == 0x20BD40u) {
        ctx->pc = 0x20BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD3Cu;
        // 0x20bd40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD44u;
        goto label_20bd44;
    }
    ctx->pc = 0x20BD3Cu;
    {
        const bool branch_taken_0x20bd3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD3Cu;
        // 0x20bd40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd3c) {
            ctx->pc = 0x20BD60u;
            goto label_20bd60;
        }
    }
    ctx->pc = 0x20BD44u;
label_20bd44:
    // 0x20bd44: 0x26430024  addiu       $v1, $s2, 0x24
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_20bd48:
    // 0x20bd48: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20bd4c:
    // 0x20bd4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20bd50:
    // 0x20bd50: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20bd54:
    // 0x20bd54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20bd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bd58:
    // 0x20bd58: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20bd5c:
    if (ctx->pc == 0x20BD5Cu) {
        ctx->pc = 0x20BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD58u;
        // 0x20bd5c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD60u;
        goto label_20bd60;
    }
    ctx->pc = 0x20BD58u;
    {
        const bool branch_taken_0x20bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD58u;
        // 0x20bd5c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd58) {
            ctx->pc = 0x20BD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd48;
        }
    }
    ctx->pc = 0x20BD60u;
label_20bd60:
    // 0x20bd60: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x20bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_20bd64:
    // 0x20bd64: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x20bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_20bd68:
    // 0x20bd68: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x20bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_20bd6c:
    // 0x20bd6c: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20bd70:
    // 0x20bd70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_20bd74:
    if (ctx->pc == 0x20BD74u) {
        ctx->pc = 0x20BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD70u;
        // 0x20bd74: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD78u;
        goto label_20bd78;
    }
    ctx->pc = 0x20BD70u;
    {
        const bool branch_taken_0x20bd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bd70) {
            ctx->pc = 0x20BD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD70u;
            // 0x20bd74: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD78u;
            goto label_20bd78;
        }
    }
    ctx->pc = 0x20BD78u;
label_20bd78:
    // 0x20bd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bd7c:
    // 0x20bd7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_20bd80:
    if (ctx->pc == 0x20BD80u) {
        ctx->pc = 0x20BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD7Cu;
        // 0x20bd80: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD84u;
        goto label_20bd84;
    }
    ctx->pc = 0x20BD7Cu;
    {
        const bool branch_taken_0x20bd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bd7c) {
            ctx->pc = 0x20BD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD7Cu;
            // 0x20bd80: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD90u;
            goto label_20bd90;
        }
    }
    ctx->pc = 0x20BD84u;
label_20bd84:
    // 0x20bd84: 0x1000008a  b           . + 4 + (0x8A << 2)
label_20bd88:
    if (ctx->pc == 0x20BD88u) {
        ctx->pc = 0x20BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD84u;
        // 0x20bd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD8Cu;
        goto label_20bd8c;
    }
    ctx->pc = 0x20BD84u;
    {
        const bool branch_taken_0x20bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD84u;
        // 0x20bd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd84) {
            ctx->pc = 0x20BFB0u;
            goto label_20bfb0;
        }
    }
    ctx->pc = 0x20BD8Cu;
label_20bd8c:
    // 0x20bd8c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_20bd90:
    // 0x20bd90: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_20bd94:
    if (ctx->pc == 0x20BD94u) {
        ctx->pc = 0x20BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD90u;
        // 0x20bd94: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BD98u;
        goto label_20bd98;
    }
    ctx->pc = 0x20BD90u;
    {
        const bool branch_taken_0x20bd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bd90) {
            ctx->pc = 0x20BD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BD90u;
            // 0x20bd94: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BFA4u;
            goto label_20bfa4;
        }
    }
    ctx->pc = 0x20BD98u;
label_20bd98:
    // 0x20bd98: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x20bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
label_20bd9c:
    // 0x20bd9c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x20bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20bda0:
    // 0x20bda0: 0x8e250164  lw          $a1, 0x164($s1)
    ctx->pc = 0x20bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_20bda4:
    // 0x20bda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20bda8:
    // 0x20bda8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20bdac:
    // 0x20bdac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20bdb0:
    // 0x20bdb0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_20bdb4:
    // 0x20bdb4: 0xde490010  ld          $t1, 0x10($s2)
    ctx->pc = 0x20bdb4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_20bdb8:
    // 0x20bdb8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x20bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20bdbc:
    // 0x20bdbc: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x20bdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_20bdc0:
    // 0x20bdc0: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x20bdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_20bdc4:
    // 0x20bdc4: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x20bdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_20bdc8:
    // 0x20bdc8: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x20bdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_20bdcc:
    // 0x20bdcc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_20bdd0:
    // 0x20bdd0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x20bdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bdd4:
    // 0x20bdd4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x20bdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bdd8:
    // 0x20bdd8: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x20bdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bddc:
    // 0x20bddc: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x20bddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bde0:
    // 0x20bde0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_20bde4:
    // 0x20bde4: 0x18a0005c  blez        $a1, . + 4 + (0x5C << 2)
label_20bde8:
    if (ctx->pc == 0x20BDE8u) {
        ctx->pc = 0x20BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDE4u;
        // 0x20bde8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BDECu;
        goto label_20bdec;
    }
    ctx->pc = 0x20BDE4u;
    {
        const bool branch_taken_0x20bde4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x20BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDE4u;
        // 0x20bde8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bde4) {
            ctx->pc = 0x20BF58u;
            goto label_20bf58;
        }
    }
    ctx->pc = 0x20BDECu;
label_20bdec:
    // 0x20bdec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20bdf0:
    // 0x20bdf0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x20bdf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bdf4:
    // 0x20bdf4: 0x247e3fe0  addiu       $fp, $v1, 0x3FE0
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16352));
label_20bdf8:
    // 0x20bdf8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20bdfc:
    // 0x20bdfc: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20be00:
    // 0x20be00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x20be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_20be04:
    // 0x20be04: 0x28c50008  slti        $a1, $a2, 0x8
    ctx->pc = 0x20be04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_20be08:
    // 0x20be08: 0x8c740168  lw          $s4, 0x168($v1)
    ctx->pc = 0x20be08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_20be0c:
    // 0x20be0c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_20be10:
    // 0x20be10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20be14:
    // 0x20be14: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x20be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_20be18:
    // 0x20be18: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x20be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20be1c:
    // 0x20be1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20be20:
    // 0x20be20: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x20be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_20be24:
    // 0x20be24: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_20be28:
    if (ctx->pc == 0x20BE28u) {
        ctx->pc = 0x20BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE24u;
        // 0x20be28: 0x8c700038  lw          $s0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE2Cu;
        goto label_20be2c;
    }
    ctx->pc = 0x20BE24u;
    {
        const bool branch_taken_0x20be24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE24u;
        // 0x20be28: 0x8c700038  lw          $s0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be24) {
            ctx->pc = 0x20BE58u;
            goto label_20be58;
        }
    }
    ctx->pc = 0x20BE2Cu;
label_20be2c:
    // 0x20be2c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x20be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20be30:
    // 0x20be30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20be34:
    // 0x20be34: 0xc087e18  jal         func_21F860
label_20be38:
    if (ctx->pc == 0x20BE38u) {
        ctx->pc = 0x20BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE34u;
        // 0x20be38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE3Cu;
        goto label_20be3c;
    }
    ctx->pc = 0x20BE34u;
    SET_GPR_U32(ctx, 31, 0x20BE3Cu);
    ctx->pc = 0x20BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE34u;
    // 0x20be38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20BE34u, 0x20BE3Cu)) {
        return;
    }
    ctx->pc = 0x20BE3Cu;
label_20be3c:
    // 0x20be3c: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
label_20be40:
    if (ctx->pc == 0x20BE40u) {
        ctx->pc = 0x20BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE3Cu;
        // 0x20be40: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE44u;
        goto label_20be44;
    }
    ctx->pc = 0x20BE3Cu;
    {
        const bool branch_taken_0x20be3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE3Cu;
        // 0x20be40: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be3c) {
            ctx->pc = 0x20BD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd84;
        }
    }
    ctx->pc = 0x20BE44u;
label_20be44:
    // 0x20be44: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x20be44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_20be48:
    // 0x20be48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20be4c:
    if (ctx->pc == 0x20BE4Cu) {
        ctx->pc = 0x20BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE48u;
        // 0x20be4c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE50u;
        goto label_20be50;
    }
    ctx->pc = 0x20BE48u;
    {
        const bool branch_taken_0x20be48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE48u;
        // 0x20be4c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be48) {
            ctx->pc = 0x20BE58u;
            goto label_20be58;
        }
    }
    ctx->pc = 0x20BE50u;
label_20be50:
    // 0x20be50: 0x1000000f  b           . + 4 + (0xF << 2)
label_20be54:
    if (ctx->pc == 0x20BE54u) {
        ctx->pc = 0x20BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE50u;
        // 0x20be54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE58u;
        goto label_20be58;
    }
    ctx->pc = 0x20BE50u;
    {
        const bool branch_taken_0x20be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE50u;
        // 0x20be54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be50) {
            ctx->pc = 0x20BE90u;
            goto label_20be90;
        }
    }
    ctx->pc = 0x20BE58u;
label_20be58:
    // 0x20be58: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x20be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_20be5c:
    // 0x20be5c: 0x491017  dsrav       $v0, $t1, $v0
    ctx->pc = 0x20be5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 2) & 0x3F));
label_20be60:
    // 0x20be60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20be64:
    // 0x20be64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20be64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20be68:
    // 0x20be68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20be6c:
    // 0x20be6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20be70:
    // 0x20be70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x20be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20be74:
    // 0x20be74: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x20be74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_20be78:
    // 0x20be78: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_20be7c:
    if (ctx->pc == 0x20BE7Cu) {
        ctx->pc = 0x20BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE78u;
        // 0x20be7c: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE80u;
        goto label_20be80;
    }
    ctx->pc = 0x20BE78u;
    {
        const bool branch_taken_0x20be78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE78u;
        // 0x20be7c: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be78) {
            ctx->pc = 0x20BE8Cu;
            goto label_20be8c;
        }
    }
    ctx->pc = 0x20BE80u;
label_20be80:
    // 0x20be80: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x20be80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_20be84:
    // 0x20be84: 0x1000000a  b           . + 4 + (0xA << 2)
label_20be88:
    if (ctx->pc == 0x20BE88u) {
        ctx->pc = 0x20BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE84u;
        // 0x20be88: 0x9050051c  lbu         $s0, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BE8Cu;
        goto label_20be8c;
    }
    ctx->pc = 0x20BE84u;
    {
        const bool branch_taken_0x20be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE84u;
        // 0x20be88: 0x9050051c  lbu         $s0, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be84) {
            ctx->pc = 0x20BEB0u;
            goto label_20beb0;
        }
    }
    ctx->pc = 0x20BE8Cu;
label_20be8c:
    // 0x20be8c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x20be8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20be90:
    // 0x20be90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20be90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20be94:
    // 0x20be94: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x20be94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20be98:
    // 0x20be98: 0xc0879b4  jal         func_21E6D0
label_20be9c:
    if (ctx->pc == 0x20BE9Cu) {
        ctx->pc = 0x20BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE98u;
        // 0x20be9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEA0u;
        goto label_20bea0;
    }
    ctx->pc = 0x20BE98u;
    SET_GPR_U32(ctx, 31, 0x20BEA0u);
    ctx->pc = 0x20BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE98u;
    // 0x20be9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x20BE98u, 0x20BEA0u)) {
        return;
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bea4:
    // 0x20bea4: 0x600ffb7  bltz        $s0, . + 4 + (-0x49 << 2)
label_20bea8:
    if (ctx->pc == 0x20BEA8u) {
        ctx->pc = 0x20BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA4u;
        // 0x20bea8: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEACu;
        goto label_20beac;
    }
    ctx->pc = 0x20BEA4u;
    {
        const bool branch_taken_0x20bea4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x20BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA4u;
        // 0x20bea8: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bea4) {
            ctx->pc = 0x20BD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd84;
        }
    }
    ctx->pc = 0x20BEACu;
label_20beac:
    // 0x20beac: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20beb0:
    // 0x20beb0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_20beb4:
    if (ctx->pc == 0x20BEB4u) {
        ctx->pc = 0x20BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB0u;
        // 0x20beb4: 0xd0102a  slt         $v0, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEB8u;
        goto label_20beb8;
    }
    ctx->pc = 0x20BEB0u;
    {
        const bool branch_taken_0x20beb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB0u;
        // 0x20beb4: 0xd0102a  slt         $v0, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb0) {
            ctx->pc = 0x20BF24u;
            goto label_20bf24;
        }
    }
    ctx->pc = 0x20BEB8u;
label_20beb8:
    // 0x20beb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20bebc:
    if (ctx->pc == 0x20BEBCu) {
        ctx->pc = 0x20BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB8u;
        // 0x20bebc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BEC0u;
        goto label_20bec0;
    }
    ctx->pc = 0x20BEB8u;
    {
        const bool branch_taken_0x20beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB8u;
        // 0x20bebc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb8) {
            ctx->pc = 0x20BED8u;
            goto label_20bed8;
        }
    }
    ctx->pc = 0x20BEC0u;
label_20bec0:
    // 0x20bec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20bec4:
    // 0x20bec4: 0xc087e18  jal         func_21F860
label_20bec8:
    if (ctx->pc == 0x20BEC8u) {
        ctx->pc = 0x20BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEC4u;
        // 0x20bec8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BECCu;
        goto label_20becc;
    }
    ctx->pc = 0x20BEC4u;
    SET_GPR_U32(ctx, 31, 0x20BECCu);
    ctx->pc = 0x20BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEC4u;
    // 0x20bec8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21F860u, 0x20BEC4u, 0x20BECCu)) {
        return;
    }
    ctx->pc = 0x20BECCu;
label_20becc:
    // 0x20becc: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_20bed0:
    if (ctx->pc == 0x20BED0u) {
        ctx->pc = 0x20BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BECCu;
        // 0x20bed0: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BED4u;
        goto label_20bed4;
    }
    ctx->pc = 0x20BECCu;
    {
        const bool branch_taken_0x20becc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BECCu;
        // 0x20bed0: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20becc) {
            ctx->pc = 0x20BD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bd84;
        }
    }
    ctx->pc = 0x20BED4u;
label_20bed4:
    // 0x20bed4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x20bed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20bed8:
    // 0x20bed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20bedc:
    // 0x20bedc: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x20bedcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20bee0:
    // 0x20bee0: 0x24423fa0  addiu       $v0, $v0, 0x3FA0
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16288));
label_20bee4:
    // 0x20bee4: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x20bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_20bee8:
    // 0x20bee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20beec:
    // 0x20beec: 0xc92017  dsrav       $a0, $t1, $a2
    ctx->pc = 0x20beecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 6) & 0x3F));
label_20bef0:
    // 0x20bef0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x20bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_20bef4:
    // 0x20bef4: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x20bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_20bef8:
    // 0x20bef8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20bef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_20befc:
    // 0x20befc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20befcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_20bf00:
    // 0x20bf00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20bf04:
    // 0x20bf04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20bf08:
    // 0x20bf08: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x20bf08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_20bf0c:
    // 0x20bf0c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x20bf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bf10:
    // 0x20bf10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20bf14:
    if (ctx->pc == 0x20BF14u) {
        ctx->pc = 0x20BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF10u;
        // 0x20bf14: 0x11e1021  addu        $v0, $t0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF18u;
        goto label_20bf18;
    }
    ctx->pc = 0x20BF10u;
    {
        const bool branch_taken_0x20bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF10u;
        // 0x20bf14: 0x11e1021  addu        $v0, $t0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf10) {
            ctx->pc = 0x20BF20u;
            goto label_20bf20;
        }
    }
    ctx->pc = 0x20BF18u;
label_20bf18:
    // 0x20bf18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bf1c:
    // 0x20bf1c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x20bf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_20bf20:
    // 0x20bf20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20bf24:
    // 0x20bf24: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x20bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_20bf28:
    // 0x20bf28: 0x27a20024  addiu       $v0, $sp, 0x24
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_20bf2c:
    // 0x20bf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20bf30:
    // 0x20bf30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20bf34:
    // 0x20bf34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20bf38:
    // 0x20bf38: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20bf3c:
    // 0x20bf3c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x20bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_20bf40:
    // 0x20bf40: 0x2f01804  sllv        $v1, $s0, $s7
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 23) & 0x1F));
label_20bf44:
    // 0x20bf44: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x20bf44u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
label_20bf48:
    // 0x20bf48: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_20bf4c:
    // 0x20bf4c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x20bf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bf50:
    // 0x20bf50: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_20bf54:
    if (ctx->pc == 0x20BF54u) {
        ctx->pc = 0x20BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF50u;
        // 0x20bf54: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BF58u;
        goto label_20bf58;
    }
    ctx->pc = 0x20BF50u;
    {
        const bool branch_taken_0x20bf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF50u;
        // 0x20bf54: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf50) {
            ctx->pc = 0x20BDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bdf8;
        }
    }
    ctx->pc = 0x20BF58u;
label_20bf58:
    // 0x20bf58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20bf5c:
    // 0x20bf5c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x20bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20bf60:
    // 0x20bf60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20bf64:
    // 0x20bf64: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x20bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20bf68:
    // 0x20bf68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20bf6c:
    // 0x20bf6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20bf70:
    // 0x20bf70: 0xfe490010  sd          $t1, 0x10($s2)
    ctx->pc = 0x20bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 9));
label_20bf74:
    // 0x20bf74: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x20bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_20bf78:
    // 0x20bf78: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x20bf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_20bf7c:
    // 0x20bf7c: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x20bf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_20bf80:
    // 0x20bf80: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x20bf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_20bf84:
    // 0x20bf84: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x20bf84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_20bf88:
    // 0x20bf88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_20bf8c:
    // 0x20bf8c: 0xb2430027  sdl         $v1, 0x27($s2)
    ctx->pc = 0x20bf8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bf90:
    // 0x20bf90: 0xb6430020  sdr         $v1, 0x20($s2)
    ctx->pc = 0x20bf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bf94:
    // 0x20bf94: 0xb244002f  sdl         $a0, 0x2F($s2)
    ctx->pc = 0x20bf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bf98:
    // 0x20bf98: 0xb6440028  sdr         $a0, 0x28($s2)
    ctx->pc = 0x20bf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20bf9c:
    // 0x20bf9c: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x20bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_20bfa0:
    // 0x20bfa0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x20bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_20bfa4:
    // 0x20bfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bfa8:
    // 0x20bfa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20bfac:
    // 0x20bfac: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x20bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
label_20bfb0:
    // 0x20bfb0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x20bfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20bfb4:
    // 0x20bfb4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x20bfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20bfb8:
    // 0x20bfb8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x20bfb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20bfbc:
    // 0x20bfbc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x20bfbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20bfc0:
    // 0x20bfc0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x20bfc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20bfc4:
    // 0x20bfc4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x20bfc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20bfc8:
    // 0x20bfc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20bfc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20bfcc:
    // 0x20bfcc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x20bfccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20bfd0:
    // 0x20bfd0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x20bfd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20bfd4:
    // 0x20bfd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20bfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20bfd8:
    // 0x20bfd8: 0x3e00008  jr          $ra
label_20bfdc:
    if (ctx->pc == 0x20BFDCu) {
        ctx->pc = 0x20BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFD8u;
        // 0x20bfdc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BFE0u;
        goto label_fallthrough_0x20bfd8;
    }
    ctx->pc = 0x20BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFD8u;
        // 0x20bfdc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20bfd8:
    ctx->pc = 0x20BFE0u;
}
